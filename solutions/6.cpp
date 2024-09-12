// Key Idea: Sum of Squares, Sum of Arithmetic Sequences

// Time Complexity: O(1)
// Optimal

#include <bits/stdc++.h>

using namespace std;

int one(int n) {
    return n * (n+1) * (2*n+1) / 6;
}

int two(int n) {
    int sum = n * (n+1) / 2;
    return sum * sum;
}

signed main() {
    int n;
    cin >> n;
    int sum_of_squares = one(n);
    int square_of_sum = two(n);
    int dif = square_of_sum - sum_of_squares;
    cout << dif << '\n';
}
