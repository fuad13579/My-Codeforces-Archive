#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    set<int> seen;

    vector<int> suffix(n + 1, 0);

    for (int i = n - 1; i >= 0; i--){
        seen.insert(a[i]);
        suffix[i] = seen.size();
    }

        while (m--)
        {
            int x;
            cin >> x;

            cout << suffix[x-1] << '\n';
        }
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
