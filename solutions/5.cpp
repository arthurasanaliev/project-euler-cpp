// Key Idea: GCD & LCM

// Time Complexity: O(N)
// Optimal

#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n;
    cin >> n;
    int res = 1;
    for (int i = 2; i <= n; i++) {
        res = lcm(res, i);
    }
    cout << res << '\n';
}
