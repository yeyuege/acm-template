//如果val大于N记得关闭id
//id得自己启用
const int N=2e6+5;
mt19937 rnd(114514);

struct node{
	int l,r;
	int val,key;
	int size;
	int fa;
	bool reverse;
}fhq[N];

int cnt,root,id[N];

int newnode(int val){
	fhq[++cnt].val=val;
	fhq[cnt].key=rnd();
	fhq[cnt].size=1;
	// id[val]=cnt;
	return cnt;
}

void update(int now){
	fhq[now].size=fhq[fhq[now].l].size+fhq[fhq[now].r].size+1;
}

void pushdown(int now){
	std::swap(fhq[now].l,fhq[now].r);
	fhq[fhq[now].l].reverse^=1;
	fhq[fhq[now].r].reverse^=1;
	fhq[now].reverse=false;
}

void split(int now,int val,int &x,int &y,int fax=0,int fay=0){
	if(!now)x=y=0;
	else {
		if(fhq[now].val<=val){
			x=now;
			fhq[x].fa=fax;
			split(fhq[now].r,val,fhq[now].r,y,now,fay);
		}else {
			y=now;
			split(fhq[now].l,val,x,fhq[now].l,fax,now);
		}
		update(now);
	}
}

void split1(int now,int siz,int &x,int &y,int fax=0,int fay=0){
	if(!now)x=y=0;
	else {
		if(fhq[now].reverse)pushdown(now);
		if(fhq[fhq[now].l].size<siz){
			x=now;
			fhq[x].fa=fax;
			split1(fhq[now].r,siz-fhq[fhq[now].l].size-1,fhq[now].r,y,now,fay);
		}
		else {
			y=now;
			fhq[y].fa=fay;
			split1(fhq[now].l,siz,x,fhq[now].l,fax,now);
		}
		update(now);
	}
}

int merge(int x,int y){
	if(!x||!y)return x+y;
	if(fhq[x].key>fhq[y].key){
		if(fhq[x].reverse)pushdown(x);
		fhq[x].r=merge(fhq[x].r,y);
		fhq[fhq[x].r].fa=x;
		update(x);
		return x;
	}else {
		if(fhq[y].reverse)pushdown(y);
		fhq[y].l=merge(x,fhq[y].l);
		fhq[fhq[y].l].fa=y;
		update(y);
		return y;
	}
}

void reverse(int l,int r){
	int x,y,z;
	split1(root,l-1,x,y);
	split1(y,r-l+1,y,z);
	fhq[y].reverse^=1;
	root=merge(merge(x,y),z);
}

void ldr(int now){
	if(!now)return;
	if(fhq[now].reverse)pushdown(now);
	ldr(fhq[now].l);
	cout<<fhq[now].val<<" ";
	ldr(fhq[now].r);
}


int x,y,z;
void ins(int val){
	split(root,val,x,y);
	root=merge(merge(x,newnode(val)),y);
}

void del(int val){
	split(root,val,x,z);
	split(x,val-1,x,y);
	y=merge(fhq[y].l,fhq[y].r);
	root=merge(merge(x,y),z);
}

int getrank(int val){
	split(root,val-1,x,y);
	int ans=fhq[x].size+1;
	root=merge(x,y);
	return ans;
}

int getnum(int rank){
	int now=root;
	while(now){
		if(fhq[fhq[now].l].size+1==rank)break;
		else if(fhq[fhq[now].l].size+1>=rank){
			now=fhq[now].l;
		}else {
			rank-=fhq[fhq[now].l].size+1;
			now=fhq[now].r;
		}
	}
	return fhq[now].val;
}

int pre(int val){
	split(root,val-1,x,y);
	int now=x;
	while(fhq[now].r)now=fhq[now].r;
	int ans=fhq[now].val;
	root=merge(x,y);
	return ans;
}

int nxt(int val){
	split(root,val,x,y);
	int now=y;
	while(fhq[now].l)now=fhq[now].l;
	int ans=fhq[now].val;
	root=merge(x,y);
	return ans;
}

int find(int val){
    int now=id[val],res=fhq[fhq[now].l].size+1;
    while(now!=root&&cnt){
		if(now==fhq[fhq[now].fa].r)res+=fhq[fhq[fhq[now].fa].l].size+1;
		now=fhq[now].fa;
    }
    return res;
}
