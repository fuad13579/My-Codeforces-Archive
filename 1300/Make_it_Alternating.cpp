#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

const long long MOD = 998244353;



ll factorial(ll n) {
    ll r = 1;
    for(ll i=2; i<=n; i++) {
        r = r * i % MOD;
    }
    return r;
}

void solve() {
    string s;
    cin >> s;

    ll n = s.size();

    ll k = 1;

    vector<ll> len;

    int l = 0;

    for(int i=1; i<n; i++){

        if(s[i] != s[i - 1]){
            k++;
            len.push_back(l + 1);
            l = 0;
        }
        else{
            l++;
        }
        }

    len.push_back(l + 1);

    ll ans = 1;

    for(auto i : len){
        ans = ans * i % MOD;
    }

    ans = ans * factorial(n - k) % MOD;

    cout<< n - k<<' '<< ans << endl;
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