#include <bits/stdc++.h>
#include<vector>
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

    vector<pair<int, string>> v;

    while(n--){
        string team;
        int q;

        cin >> team >> q;

        v.push_back({q, team});
    }



    sort(all(v));

    // for(auto x : v)
    //     cout << x.first;

    reverse(all(v));

    int i = 0;
    for (auto x: v){

        if(i == 1)
            break;
        cout << x.second << '\n';

        i++;
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