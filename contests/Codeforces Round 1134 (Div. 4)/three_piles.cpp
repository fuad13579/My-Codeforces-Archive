#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int a,b,c;
    cin >> a >> b >> c;

    int sum = a + b + c;
    if(sum % 3 != 0) {
        cout << "NO\n";
        return;

    }

    int x = sum / 3;
    
    if(a == x - 1 && b == x && c == x + 1) {
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
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