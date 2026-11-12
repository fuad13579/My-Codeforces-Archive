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

    vector<int> a(n);

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    sort(all(a));

    if(k == n){
        cout << "Yes\n";
        for(int x:a){
            cout << x << " ";
        }
        cout<< endl;
        return;
    }

    ll sum = 0;

    for (int i = n - k; i < n; i++) {
        sum += a[i];
    }

    if(sum <= 1LL * k * a[n - k - 1]) {
        cout << "No\n";
        return;
    }

    cout << "Yes\n";

    for (int i = n - k; i < n; i++){
        cout << a[i] << " ";
    }
    for(int i = n - k - 1; i >= 0; i--) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
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