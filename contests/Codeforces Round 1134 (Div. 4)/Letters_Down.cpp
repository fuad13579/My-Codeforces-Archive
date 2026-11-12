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

    deque<char> q;
    for(int i=0; i<n; i++) {
        q.push_back(s[i]);
    }

    int ans = 0;
    set<char> need;

    while (q.size() > 1) {
        if (q.front() == q.back()) {
            q.pop_back();
            q.pop_front();
        }
        else {
            char h = max(q.front(), q.back());
            char l = min(q.front(), q.back());

            for (char c = h; c > l; c--) {
                need.insert(c);
            }

            q.pop_back();
            q.pop_front();
        }
    }

    ans = need.size();


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