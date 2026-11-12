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
    string s;
    cin >> n >> s;

    int cnt = 0;

    for(int i=0; i<n; i++){
        if(s[i] == '1') {
            cnt++;
        }
    }

    if(cnt == 1) {
        cout << "0" << endl;
        return;
    }

    if(cnt == 2){
        cout << "1" << endl;
        return;
    }

    int first = 0;
    int last = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '1') {
            first = i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--){
        if(s[i] == '1') {
            last = i;
            break;
        }
    }

    cout << last - first << endl;
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