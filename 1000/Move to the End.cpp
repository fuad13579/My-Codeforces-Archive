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
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    vector<ll> psum(n + 1, 0);
    for(int i=0; i<n; i++) psum[i+1] = psum[i] + a[i];

    vector<ll
    > pmax(n + 1, 0);
    for(int i=0; i<n; i++) pmax[i+1] = max(pmax[i], a[i]);

    for (int i = 1; i <= n; i++){
        cout << pmax[n - i + 1] + psum[n] - psum[n - i + 1] << " ";
    }
    cout << "\n";
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