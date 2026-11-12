#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    string x;

    cin >> x;

    int k;

    cin >> k;

    string ans;

    void solve() {
    string x;
    int k;
    cin >> x >> k;

    string ans;

        for (char d : x) {
            while (k > 0 && !ans.empty() && ans.back() > digit) {
                ans.pop_back();
                k--;
            }

            ans += digit;
        }

        while (k > 0) {
            ans.pop_back();
            k--;
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