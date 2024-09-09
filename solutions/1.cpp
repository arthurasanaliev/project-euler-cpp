#include <bits/stdc++.h>

using namespace std;

int calc(int n, int f, int t) {
    return n * (f + t) / 2;
}

signed main() {
    int n;
    cin >> n;
    n -= 1;
    int s3 = calc(n / 3, 3, n / 3 * 3);
    int s5 = calc(n / 5, 5, n / 5 * 5);
    int s15 = calc(n / 15, 15, n / 15 * 15);
    cout << s3 + s5 - s15 << '\n';
}
