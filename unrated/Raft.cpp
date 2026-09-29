/*
Raft

An expedition team of n members, numbered 1 through n, must cross from
the south bank to the north bank. The raft can carry at most two people and
a total weight of at most w. Every crossing requires at least one person
to steer the raft. Find the minimum number of crossings in both directions
needed to move everyone north, or report that it is impossible.

Input:
The first line contains n and w. The second line contains the weights
of the n team members.

Constraints:
1 <= n <= 1000
1 <= w <= 10^6
Each weight is a positive integer at most 10^6.

Output:
Print the minimum number of crossings, or -1 if everyone cannot cross.
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
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    sort(all(a));

    if (a.back() > w) {
        cout << -1 << '\n';
        return;
    }
    if (n == 1) {
        cout << 1 << '\n';
        return;
    }
    if (a[0] + a[1] > w) {
        cout << -1 << '\n';
        return;
    }

    int solo = 0;
    for (int x : a)
        if (x + a[0] > w) ++solo;

    cout << 2 * n - 3 + 2 * solo << '\n';
}

int main() {
    fast_io;

    solve();

    return 0;
}
