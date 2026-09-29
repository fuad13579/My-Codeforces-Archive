/*
Turn Into a Palindrome

Ali has a string s consisting of n lowercase Latin letters. He also has
a character c, which is a lowercase Latin letter.

For one coin, he can perform the following operation on s:
- Choose an index i, where 1 <= i <= n.
- Replace the i-th character of s with c.

Compute the minimum number of coins Ali must spend to turn s into a
palindrome.

A string of length n is a palindrome if its i-th character equals its
(n - i + 1)-th character for every i from 1 to n.

Input:
The first line contains an integer t, the number of test cases.

For each test case:
- The first line contains an integer n and a lowercase Latin letter c:
  the length of s and the replacement character.
- The second line contains s, consisting of n lowercase Latin letters.

Output:
For each test case, output the minimum number of coins needed to make
the string a palindrome.
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
    int n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < n/2; i++){
        if(s[i] != s[n - i - 1] && (s[i] == c || s[n - i - 1] == c))
            cnt++;
        else if(s[i] != s[n - i - 1] && (s[i] != c && s[n - i - 1] != c))
            cnt += 2;
    }

    cout << cnt << '\n';
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