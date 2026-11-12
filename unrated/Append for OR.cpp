#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n, y;
    cin >> n >> y;

    ll OR = 0;

    for (int i = 0; i < n;i++){
        ll x;
        cin >> x;

        OR |= x;
    }

    if((OR | y) != y){
        cout << -1 << '\n';
    }
    else{
        cout << (OR ^ y) << '\n';
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