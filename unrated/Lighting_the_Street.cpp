#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, m, L;
    cin >> n >> m >> L;

    vector<int> p(n), l(m);

    for (int &x: p) {
        cin >> x;
    }
    for(int &y:l){
        cin >> y;
    }

    sort(all(p));
    sort(all(l));

    int need = max(p[0], L - p[n - 1]);

    for (int i = 1; i < n; i++){
        need = max(need, (p[i] - p[i - 1] + 1) / 2);
    }

    int ans = -1;

    for (int i = 0; i < m; i++){
        if(l[i] >= need){
            ans = l[i];
            break;
        }

    }

    cout << ans << '\n';
}

int main() {
    fast_io;

    int t=1;
    //cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
