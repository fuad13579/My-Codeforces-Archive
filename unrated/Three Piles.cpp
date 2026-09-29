#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    if(a<=b && abs(a + c - b) <= abs (a - b)){
        cout << abs(a - b) << '\n';
    }
    else if(a<=b && abs(a + c - b) > abs (a - b)){
        cout << abs(a + c - b) << '\n';
    }

    else if (a > b){
        cout << abs(a + c - b) << '\n';
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