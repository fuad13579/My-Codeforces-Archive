#include <bits/stdc++.h>
#include<bit>
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
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    sort(all(a));


    ll ans = 0;

    if(a[n-1] == a[0]){
        ans = a[n - 1] | a[n - 1];
    }
    else{
        int k = __bit_width((unsigned long long)a[n - 1] ^ a[0]);
        ans = a[n - 1] | ((1LL << k) - 1);
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