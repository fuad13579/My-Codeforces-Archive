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
    string s;
    cin >> s;

    int ans = 0;

    if(s[0]!='R')ans++;

    for(int i=1; i<n; i++) {
        if(s[i-1] == s[i]){
            ans++;
        }
    }

    cout << ans << endl;
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