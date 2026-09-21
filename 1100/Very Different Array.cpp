#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, m;

    cin >> n >> m;

    vector<int> a(n), b(m);

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    sort(all(a));
    sort(all(b));


    int la = 0, ra = n - 1;
    int lb = 0, rb = m - 1;
    ll ans = 0;

    while (la <= ra) {
        ll bigB = abs(a[la] - b[rb]);
        ll smallB = abs(a[ra] - b[lb]);

        if (bigB > smallB) {
            ans += bigB;
            la++;
            rb--;
        } else {
            ans += smallB;
            ra--;
            lb++;
        }
    }

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