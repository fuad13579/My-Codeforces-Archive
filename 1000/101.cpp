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

    for (int i = 0; i < n; i++) {
        if (a[i] == -1) a[i] = 1;
        if (a[i] == 1) break;
    }
        
    for (int i = n-1; i >= 0; i--) {
        if (a[i] == -1) a[i] = 1;
        if (a[i] == 1) break;
    }
        
        
        for (int x: a)
        cout << max(0, x) << ' ';

    cout << '\n';
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
