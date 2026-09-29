#include <bits/stdc++.h>
using namespace std;

// review again

#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    vector<int> p(n);
    for(int i=0; i<n; i++) cin >> p[i];

    string s;

    cin >> s;

    vector<int> zero, one, ans(n);

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') zero.push_back(i);
        else one.push_back(i);
    }

    auto byPopularity = [&](int i, int j)
    {
        return p[i] < p[j];
    };

    sort(all(zero), byPopularity);
    sort(all(one), byPopularity);

    int rank = 1;
    for (int index : zero) ans[index] = rank++;
    for (int index : one) ans[index] = rank++;

    for (int value : ans) cout << value << ' ';
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
