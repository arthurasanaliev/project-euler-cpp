// Key Idea: None

// Time Complexity: O(N*len)
// Not Optimal

#include <bits/stdc++.h>

using namespace std;

long long collatz_chain(long long n) {
    long long cnt = 0;
    while (n > 1) {
        if (n % 2) n = 3*n + 1;
        else n = n / 2;
        cnt += 1;
    }
    return cnt;
}

signed main() {
    long long n;
    cin >> n;
    long long bound = 1;
    long long ans = -1, cnt = 0;
    for (long long i = n - 1; i >= bound; i--) {
        long long c = collatz_chain(i);
        if (c > cnt) {
            cnt = c;
            ans = i;
        }
    }
    cout << ans << '\n';
}
