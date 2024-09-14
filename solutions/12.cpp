// Key Idea: Tau Function

// Time Complexity: ...
// Not Optimal

#include <bits/stdc++.h>

using namespace std;

int tau(long long n) {
    int cnt = 1;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i) continue;
        int c = 1;
        while (n % i == 0) {
            n /= i;
            c += 1;
        }
        cnt *= c;
    }
    if (n > 1) cnt *= 2;
    return cnt;
}

signed main() {
    int n;
    cin >> n;
    long long cur = 0;
    for (long long i = 1; ; i++) {
        cur += i;
        if (tau(cur) > n) {
            cout << cur << '\n';
            return 0;
        }
    }
}
