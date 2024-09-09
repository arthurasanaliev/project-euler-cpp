// Key Idea: F(n) = 4*F(n-3) + F(n-6)

// Time Complexity: O(N/3)

#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n;
    cin >> n;
    int s = 2;
    int x = 2, y = 8;
    while (y <= n) {
        s += y;
        x += y * 4;
        swap(x, y);
    }
    cout << s << '\n';
}
