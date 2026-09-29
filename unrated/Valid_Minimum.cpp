/*
Valid Minimum

There are three hidden numbers A, B, and C. Given min(A, B), min(B, C),
and min(C, A), determine whether there exists a tuple (A, B, C) that
produces all three given values.

Input:
The first line contains T, the number of test cases. Each test case
contains three integers: min(A, B), min(B, C), and min(C, A).

Output:
For each test case, print YES if a valid tuple exists and NO otherwise.
The output is case-insensitive.

Constraints:
1 <= T <= 1000
1 <= min(A, B), min(B, C), min(C, A) <= 10
*/

#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int x, y, z;
    cin >> x >> y >> z;

    array<int, 3> values{x, y, z};
    sort(all(values));
    cout << (values[0] == values[1] ? "YES\n" : "NO\n");
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