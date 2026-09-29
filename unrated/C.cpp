#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, a, b, cnt = 0;

    cin >> n >> a >> b;

    // int cnt = (n - b) - a;

    // if(cnt < 0){
    //     cout << abs(cnt) << '\n';
    // }
    // else
    //     cout << cnt - 2 << '\n';

    if(a + b < n){
        cnt = n - (a + 1) - (b + 1);
    }
    if(a + b >= n){
        cnt = n - (n - a) - (n - b);
    }

    cout << cnt << '\n';
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