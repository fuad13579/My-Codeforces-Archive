#include <bits/stdc++.h>
using namespace std;

//review again

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

    if (s[0] == '1') {
        cout << count(all(s), '0') << '\n';
        return;
    }

    int zeroRight = count(all(s), '0');
    int oneLeft = 0;
    int ans = n;

    for (char c : s) {
        if (c == '0') {
            zeroRight--;
        } 
        else {
            oneLeft++;
        }
        ans = min(ans, oneLeft + zeroRight);
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
