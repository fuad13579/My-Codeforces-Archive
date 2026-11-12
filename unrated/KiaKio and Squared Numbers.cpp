/*
KiaKio and Squared Numbers

There are n lighthouses, and all of them begin on the same night.
Lighthouse i initially displays the number a[i]. On each following night,
a lighthouse replaces its number with the sum of the squares of its decimal
digits. This rule continues forever.

Two lighthouses i and j are in tune if there is some night after which they
display the same number on every night forever. Count the pairs (i, j) with
i < j that are in tune.

Input:
The first line contains the number of test cases. For each test case, read
n followed by the n initial numbers a[i].

Output:
For each test case, print the number of in-tune pairs.
*/

// review again later(interesting problem)

#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()


int nxtval(long long x) {
    int sum = 0;

    while (x > 0) {
        int digit = x % 10;
        sum += digit * digit;
        x /= 10;
    }

    return sum;
}

int getgroup(long long x) {
    int cyc[8] = {4, 16, 37, 58, 89, 145, 42, 20};

    // Applying nxtval repeatedly gives:
// 4 -> 16 -> 37 -> 58 -> 89 -> 145 -> 42 -> 20 -> 4.
// It returns to 4, so these eight values form a repeating cycle.
// The value 1 is a separate fixed point: nxtval(1) = 1.


int cyc[8] = {4, 16, 37, 58, 89, 145, 42, 20};

    int step = 0;
    while(x!= 1){
        for (int p = 0; p < 8;p++){
            if(x ==cyc[p]){
                return ((p-(step%8) + 8)%8);
            }
        }
        
        x = nxtval(x);
            step++;

    }
    return 8;
}


ll kC2(ll k) {
    return (k * (k - 1) / 2);
}


void solve() {
    int n;
    cin >> n;

    array<ll, 9> cnt{};

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];


        for (int i = 0; i < n; i++){
            ++cnt[getgroup(a[i])];
        }

        ll ans = 0;

        for (int i = 0; i < 9; i++) {
            ans += kC2(cnt[i]);
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