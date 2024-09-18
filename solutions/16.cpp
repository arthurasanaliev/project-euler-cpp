#include <bits/stdc++.h>

using namespace std;

int digits_sum(int n) {
    int s = 0;
    while (n > 0) {
        s += (n % 10);
        n /= 10;
    }
    return s;
}

signed main() {
    int n;
    cin >> n;
    long long cur = 1;
    for (int i = 0; i < n; i++) {
        cur *= 2;
        int s = digits_sum(cur);
        cout << s << ' ';
    }
    cout << '\n';
}
