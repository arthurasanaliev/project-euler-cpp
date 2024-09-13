// Key Idea: Optimal Prime Check

// Time Complexity: O(N * sqrt(N) / 6)
// Optimal

#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;
    if (n <= 8) return true;
    if (n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0) return false;
        if (n % (i + 2) == 0) return false;
    }
    return true;
}

signed main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 2 << '\n';
        return 0;
    }
    int cnt = 1, cur = 1;
    while (cnt < n) {
        cur += 2;
        if (is_prime(cur)) {
            cnt += 1;
        }
    }
    cout << cur << '\n';
}
