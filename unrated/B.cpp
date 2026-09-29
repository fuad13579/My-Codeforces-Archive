/*
Problem statement

You surely agree that the best place to use a restroom is at home.
However, sometimes people have no choice but to use a public restroom,
where toilets are often arranged side by side in a single row. Aiming
for some privacy, each person who enters such a restroom chooses an
unoccupied toilet that has no occupied toilets immediately on its sides.

Suppose k people arrive at a public restroom with n initially unoccupied
toilets arranged in a row. Determine whether it is possible for each of
the k people to choose a toilet with no occupied toilets on its sides,
such that an additional person cannot find an unoccupied toilet meeting
the same privacy condition.

People choose toilets one by one, and each chosen toilet is immediately
occupied before the next person is allowed to choose.

Input:
A single line containing two integers k and n, respectively the number
of people and the number of toilets.

Output:
If such a selection is possible, output a string of length n.
The i-th character must be 'X' if the i-th toilet is chosen, and '-'
otherwise. Exactly k toilets must be chosen. If there are multiple
solutions, output any of them.

If no such selection is possible, output a line containing '*'.
*/

#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    ll k, n;

    string s;

    cin >> k >> n;

    if(n < 2 * k - 1 || n > 3 * k){
        cout << '*' << '\n';
        return;
    }

    if(2 * k - 1 == n){
        for (ll i = 0; i < n; i++){
            if(i%2)
                s += '-';
            else
                s += 'X';
        }
    }
    else if(2 * k - 1 != n && abs(n - 2*k) < 2){
        for (int i = 0; i < n; i++){
            if(i%2)
                s += 'X';
            else
                s += '-';
        }
    }
    // else if(2 * k + 1 == n){
    //     for (ll i = 0; i < n; i++){
    //         if(i%3 == 0)
    //             s += 'X';
    //         else
    //             s += '-';
    //     }
    // }
    else{
        ll extra = n - (2 * k - 1);
        for (ll i = 0; i < k; i++){
            if(extra > 0){
                s += '-';
                --extra;
            }
            s += 'X';
            if(i + 1 < k)
                s += '-';
        }
        if(extra > 0)
            s += '-';
    }

    cout << s << '\n';

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