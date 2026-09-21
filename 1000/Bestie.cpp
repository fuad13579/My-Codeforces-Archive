#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;

    ll g = 0;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        g = gcd(g, x);
    }

    if (g == 1) {
        cout << 0 << '\n';
    }
    else if (gcd(g, n) == 1) {
        cout << 1 << '\n';
    }
    else if (n > 1 && gcd(g,(n - 1)) == 1) {
        cout << 2 << '\n';
    }
    else {
        cout << 3 << '\n';
    }

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