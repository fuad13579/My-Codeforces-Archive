#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, k;
    cin >> n >> k;


	if (k == n - 1) {
		cout << -1 << '\n';
		return;

	}

    int runs = n - k;
    int total0 = (n + 1) / 2;
    int total1 = n / 2;

    int runs0 = (runs + 1) / 2;
    int runs1 = runs / 2;

    int x0 = total0 - runs0;
    int x1 = total1 - runs1;

    string ans;

    for (int i = 0; i < runs; i++) {
        if(i % 2 == 0){
            if(i == 0){
                ans += string(x0 + 1, '0');
            }
            else {
                ans += '0';
            }
        }
        else {
            if(i == 1){
                ans += string(x1 + 1, '1');
            }
            else {
                ans += '1';
            }
        }
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
