#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

ll lb(vector <ll>p,ll n,ll x){
    ll l = 0, r = n - 1, mid;

    while(l<=r){
        mid = (l + r) / 2;

        if(p[mid] >=x)
            r = mid - 1;

        else
            l = mid + 1;
    }

    return l;
}

void solve(){
    int n;

    cin >> n;

    vector<ll> p(n);

    for (int i = 0; i < n;i++)
        cin >> p[i];

    sort(all(p));

    ll mx = 0;

    //cout << lb(p, n, p[n - 1]);

    for (ll i = 0; i < n; i++){

        if(i > 0 && p[i] == p[i - 1])
            continue;

        ll cur = p[i] * (n - i);

        //cout << cur << ' ';

        mx= max(cur, mx);
    }

    cout << mx << '\n';
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