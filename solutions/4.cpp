// Key Idea: Brute Force

// Time Complexity: O(10^d * 10^d * 2d)
// Not Optimal

#include <bits/stdc++.h>

using namespace std;

bool calc(int m) {
    string s = to_string(m);
    int n = s.size();
    for (int l = 0, r = n - 1; l < r; l++, r--) {
        if (s[l] != s[r]) {
            return false;
        }
    }
    return true;
}

signed main() {
    int d;
    cin >> d;
    int ans = 0;
    int start = (int)pow(10, d - 1);
    int end = (int)pow(10, d);
    for (int i = start; i < end; i++) {
        for (int j = start; j <= i; j++) {
            if (calc(i * j)) {
                ans = max(ans, i * j);
            }
        }
    }
    cout << ans << '\n';
}
