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
    for(int i=0; i<n; i++) cin >> a[i];

    bool possible = true;

    for (int i = 0; i + 1 < n; ++i) {
        if (a[i] > a[i + 1]) { 
            if (a[i] - a[i + 1] > 1) {
                possible = false;
                break;
            }

            swap(a[i], a[i + 1]);

        } 
            
        }

        if(possible) cout << "YES\n";
        else cout << "NO\n";
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