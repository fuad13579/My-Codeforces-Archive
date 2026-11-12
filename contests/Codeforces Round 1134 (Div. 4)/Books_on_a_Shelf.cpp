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
    vector<int> h(n);
    vector<int> final;
    set<int> s;
    map<ll,ll> freq;

    for(int i=0; i<n; i++) {
        cin >> h[i];
        s.insert(h[i]);
        freq[h[i]]++;
    }

    int cnt = 0;

    for(int i : s) {
        final.push_back(i);
        cnt++;
        freq[i]--;
    }

    for (auto i = s.rbegin(); i != s.rend(); i++) {

        if (freq[*i] > 0) {
            cnt++;
        }

        while (freq[*i] > 0) {
            final.push_back(*i);
            freq[*i]--;
        }
    }

    cout << cnt << '\n';

    for (int i : final) {
        cout << i << " ";
    }

    cout << '\n';
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