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



    int c = 0;

    for (int i = 1; i < n; i++) {
        if(s[i] != s[i-1]){ {
            c++;
        }
    }

}

    if(c == 0) {
        cout << 1 << '\n';
        return;
    }

    else if( c == 1){
        cout << 2 << '\n';
        return;
    }

    else {
        cout << 1 << '\n';
        return;
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