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

    vector<int> a(n),freq(25,0);

    for(int i=0; i<n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    ll x = 0, y = 0;

    for (int i = 24; i >= 0;i--){
        while(freq[i]--){
            if(x<=y)
                x += (1LL << i);
            else 
                y += (1LL << i);
        }
    }

    cout << x * y<< endl;
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