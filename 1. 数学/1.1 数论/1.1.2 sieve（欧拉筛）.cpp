vector<int> minp, primes;
// vector<int> phi, mu, d, cntminp;
// vector<int> sumfac, minpg;

void sieve(int n){
    minp.assign(n + 1, 0);
    // phi.assign(n + 1, 0);
    // mu.assign(n + 1, 0);
    // d.assign(n + 1, 0);
    // cntminp.assign(n + 1, 0);
    // sumfac.assign(n + 1, 0);
    // minpg.assign(n + 1, 0);
    primes.clear();
    // phi[1] = 1;
    // mu[1] = 1;
    // d[1] = 1;
    // sumfac[1] = 1;
    // minpg[1] = 1;

    for (int i = 2; i <= n; i++) {
        if(minp[i] == 0) {
            minp[i] = i;
            primes.push_back(i);
            // phi[i] = i - 1;
            // mu[i] = -1;
            // d[i] = 2;
            // cntminp[i] = 1;
            // sumfac[i] = i + 1;
            // minpg[i] = i + 1;
        }

        for (auto p : primes) {
            if (i * p > n) {
                break;
            }
            minp[i * p] = p;
            if (p == minp[i]) {
                // phi[i * p] = phi[i] * p;
                // mu[i * p] = 0;
                // cntminp[i * p] = cntminp[i] + 1;
                // d[i * p] = d[i] / cntminp[i * p] * (cntminp[i * p] + 1);
                // minpg[i * p] = minpg[i] * p + 1;
                // sumfac[i * p] = sumfac[i] / minpg[i] * minpg[i * p];

                break;
            }
            // phi[i * p] = phi[i] * phi[p];
            // mu[i * p] = -mu[i];
            // cntminp[i * p] = 1;
            // d[i * p] = d[i] * 2;
            // minpg[i * p] = 1 + p;
            // sumfac[i * p] = sumfac[i] * sumfac[p];
        }
    }

    // for (int i = 2; i <= n; i++) {
    //     mu[i] += mu[i - 1];
    // }
}

bool isprime(int n) {
    return minp[n] == n;
}
