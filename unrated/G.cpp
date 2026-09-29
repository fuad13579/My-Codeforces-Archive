#include <bits/stdc++.h>

using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;

    cin >> s;

    int size = s.size();

    set<char> uqch;

    for (int i = 0; i < size; i++){
        uqch.insert(s[i]);
    }

    int set_size = uqch.size();

    int ans = size - set_size;

    cout << ans << '\n';
    
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