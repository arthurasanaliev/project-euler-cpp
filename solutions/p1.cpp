// Key Idea: Arithmetic Sequences Sum

// Time Complexity: O(1)
// Optimal

#include <bits/stdc++.h>

using namespace std;

int sum(int n, int first, int last) {
    return n * (first + last) / 2;
}

signed main() {
    int n;
    cin >> n;
    n -= 1;
    int sum3 = sum(n / 3, 3, n / 3 * 3);
    int sum5 = sum(n / 5, 5, n / 5 * 5);
    int sum15 = sum(n / 15, 15, n / 15 * 15);
    cout << sum3 + sum5 - sum15 << '\n';
}
