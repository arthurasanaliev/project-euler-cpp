// Key Idea: None

// Time Complexity: O(N^2)
// Not Optimal

#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n;
    cin >> n;
    for (int a = 1; a < n; a++) {
        for (int b = a; a + b < n; b++) {
            int c = n - a - b;
            if (a*a + b*b == c*c) {
                cout << a * b * c << '\n';
                return 0;
            }
        }
    }
    cout << -1 << '\n';
}
