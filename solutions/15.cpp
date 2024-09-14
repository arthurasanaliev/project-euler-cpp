// Key Idea: Combinatorics -- (N+M)!/N!/M!

// Time Complexity: O(N*M)
// Optimal

#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    iota(a.begin(), a.end(), m + 1);
    iota(b.begin(), b.end(), 1);
    for (int& x : a) {
        for (int& y : b) {
            int g = gcd(x, y);
            x /= g, y /= g;
        }
    }
    long long res = 1;
    for (int x : a) res *= x;
    for (int y : b) res /= y;
    cout << res << '\n';
}
