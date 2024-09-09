// Key Idea: F(n) = 4*F(n-3) + F(n-6)

// Time Complexity: O(N/3)

#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n;
    cin >> n;
    int sum = 2;
    int one = 2, two = 8;
    while (one <= n) {
        sum = sum + two;
        one = two * 4 + one;
        swap(one, two);
    }
    cout << sum << '\n';
}
