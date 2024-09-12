// Key Idea: Prime Factorization

// Time Complexity: O(N*sqrt(N))

#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n;
    cin >> n;
    unordered_map<int, int> divs;
    for (int i = 2; i <= n; i++) {
        int j = i;
        for (int d = 2; d * d <= j; d++) {
            if (j % d) continue;
            int cnt = 0;
            while (j % d == 0) {
                j /= d;
                cnt += 1;
            }
            divs[d] = max(divs[d], cnt);
        }
        if (j > 1) {
            divs[j] = 1;
        }
    }
    int res = 1;
    for (auto x : divs) {
        res *= (int)pow(x.first, x.second);
    }
    cout << res << '\n';
}
