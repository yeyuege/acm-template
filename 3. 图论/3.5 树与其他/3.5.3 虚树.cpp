auto build = [&](vector<int>& nodes) {
        sort(all(nodes), [&](int x, int y) {
            return dfn[x] < dfn[y];
        });
    
        vector<int> stk;
        adjvt[0].clear();
        stk.push_back(0);
        int len = 1;
    
        for (int j = 0; j < nodes.size(); j++) {
            int l = lca(stk[len - 1], nodes[j]);
            if (l != stk[len - 1]) {
                while (dfn[stk[len - 2]] > dfn[l]) {
                    adjvt[stk[len - 2]].push_back(stk[len - 1]);
                    stk.pop_back();
                    len--;
                }
    
                if (stk[len - 2] != l) {
                    adjvt[l].clear();
                    adjvt[l].push_back(stk[len - 1]);
                    stk.pop_back();
                    stk.push_back(l);
                }
                else {
                    adjvt[stk[len - 2]].push_back(stk[len - 1]);
                    stk.pop_back();
                    len--;
                }
            }
    
            adjvt[nodes[j]].clear();
            stk.push_back(nodes[j]);
            len++;
        }
    
        while (stk.size() > 1) {
            adjvt[stk[len - 2]].push_back(stk[len - 1]);
            stk.pop_back();
            len--;
        }
    };
