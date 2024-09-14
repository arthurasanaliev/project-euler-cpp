// Key Idea: Sieve of Eratosthenes

// Time Complexity: O(N*log(logN))
// Optimal

#include <bits/stdc++.h>

using namespace std;

long long sieve(int n) {
    vector<int> prime(n, true);
    prime[1] = prime[0] = false;
    for (int i = 2; i * i < n; i++) {
        if (!prime[i]) continue;
        for (int j = i * i; j < n; j += i) {
            prime[j] = false;
        }
    }
    long long sum = 0;
    for (int i = 2; i < n; i++) {
        if (prime[i]) {
            sum += i;
        }
    }
    return sum;
}

signed main() {
    int n;
    cin >> n;
    cout << sieve(n) << '\n';
}
