#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    ll sum = 0;

    // for (int i = 1; i <= n; i++){
    //     sum += i;
    // }

    if(n % 4){
        cout << "NO" << '\n';
    }
    else{
        cout << "YES" << '\n';

        for (int i = 1; i <= n; i++ ){
            if((i%2==0 && i<=n/2) || (i%2==1 && i>n/2))
                cout << i << ' ';
            else
                continue;;
        }

        cout << '\n';

        for (int i = 1; i <= n; i++ ){
            if((i%2==1 && i<=n/2) || (i%2==0 && i>n/2))
                cout << i << ' ';
            else
                continue;;
        }
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