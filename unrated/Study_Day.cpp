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

    vector<int> a(n);

    for(int x : a) {
        cin >> x;
        a.push_back(x);
    }

    int total = 0;

    string ans{};

    int i = 0;

    if (0 < a[i] && a[i] >= a[i + 1]){
            total += 2 * a[i];
            ans += 'M';
        }
    else{
        total += a[i];
        ans += 'O';
    }



    while(i<n-2){
        if(a[i] <= a[i + 1] && a[i + 1] >= a[i + 2]){
            total += 2 * a[i + 1];
            ans += 'M';
        }
        else{
            total += a[i + 1];
            ans += 'O';
        }

        i++;
    }

    
    if (i == n - 2 && (a[i] <= a[i + 1] && a[i + 1] > 0)){
            total += 2 * a[i + 1];
            ans += 'M';
        }
    else{
        total += a[i + 1];
        ans += 'O';
    }

    cout << total << '\n'
        << ans << '\n';
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