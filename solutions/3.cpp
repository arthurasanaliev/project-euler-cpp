// Key Idea: None

// Time Complexity: O(sqrt(N))
// Optimal

#include <bits/stdc++.h>

using namespace std;

signed main() {
    long long n;
    cin >> n;
    long long factor = 2;
    long long last_factor = -1;
    while (n > 1) {
        if (n % factor == 0) {
            last_factor = factor;
            while (n % factor == 0) {
                n = n / factor;
            }
        }
        factor = factor + 1;
    }
    cout << last_factor << '\n';
}
