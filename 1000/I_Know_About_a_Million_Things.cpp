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
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    ll e=0, o=0;

    for(int i=0; i<n; i++) {
        if(a[i] % 2 == 1) {
            o ++;
        } 
        else {
            e ++;
        }
    }

    if((e == 1 && o == 1)||(e == 0 && o == 3)){
        cout << "Larpity\n";
    }
    else {
        cout<< "MoggItY\n";
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