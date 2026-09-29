/*
Divar's Salaries

Amin prepares the salary payment list for Divar's employees. Each employee
has a base hourly wage of x Rials. Normal working hours are paid at x per
hour. Hours beyond the standard 140 hours per month are overtime and are
paid at 1.5 times x. Holiday hours are paid at twice x, even when they fall
beyond the standard limit; holiday pay takes precedence over overtime pay.
Calculate each employee's total monthly salary.

Input:
The first line contains n, the number of employees. Each of the next n
lines contains x, k, and h: the base hourly wage, total hours worked, and
holiday hours worked.

Constraints:
1 <= n <= 1000
100 <= x <= 10^6, and x is a multiple of 10
0 <= k <= 480
0 <= h <= k

Output:
Print each employee's salary on a separate line, with commas separating
groups of three digits from the right.
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
    int x, k, h;

    long long ans = 0;


    cin >> x >> k >> h;

    if(k - h <= 140)
        ans = h * 2 * x + (k - h) * x;
    else
        ans = h * 2 * x + 140 * x + (k - 140 - h) * x * 3 / 2;

    //cout << ans << '\n';
    if(ans == 0){
        cout << '0' << '\n';
        return;
    }

    vector<char> digits;

    while(ans>0){
        int n = ans % 10;
        ans /= 10;

        digits.push_back(n + '0');
    }

    
    vector<char> ans_str;
    int i = 0;

    int j = 0;

    while(i < digits.size()){
        j = i;
        if(j%3==0 && j>2){
            ans_str.push_back(',');
        }
        ans_str.push_back(digits[i]);
        i++;
    }


    reverse(ans_str.begin(), ans_str.end());

    for (int i = 0; i < ans_str.size();i++){
        cout << ans_str[i];
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