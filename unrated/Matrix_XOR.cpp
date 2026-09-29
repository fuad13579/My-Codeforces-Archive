/*
Matrix XOR

Sabo has an integer K and defines a matrix A with N rows and M columns,
both numbered from 1. For every valid cell, A[i][j] = K + i + j.
Find the bitwise XOR of all elements of the matrix.

Input:
The first line contains T, the number of test cases. Each test case contains
three integers N, M, and K on one line.

Constraints:
1 <= T <= 10^5
1 <= N, M <= 2 * 10^6
1 <= K <= 10^9
The sum of N over all test cases is at most 2 * 10^6.
The sum of M over all test cases is at most 2 * 10^6.

Output:
For each test case, print the bitwise XOR of all matrix elements on its
own line.
*/

#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

int xorUpto(int v) {
    if (v % 4 == 0)
        return v;
    else if (v % 4 == 1)
        return 1;
    else if (v % 4 == 2)
        return v + 1;
    else
        return 0;
}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    if (n > m) swap(n, m);

    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans ^= xorUpto(k + i + m) ^ xorUpto(k + i);

    cout << ans << '\n';
}

int main() {
    fast_io;

    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}