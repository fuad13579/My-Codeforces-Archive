/*
Ambagaata

Anthonio replaces every vowel ('a', 'e', 'i', 'o', 'u') with 'a' when
typing. Each 'y' may either remain 'y' or be replaced with 'a', independently.

Given a dictionary and several typed messages, determine for each message:
- "possible" and the uniquely reconstructed original message, if exactly one
  dictionary message could have produced it;
- "ambiguous", if multiple dictionary messages could have produced it;
- "impossible", if no dictionary message could have produced it.

Input:
The first line contains n and q, the number of dictionary words and messages.
The next n lines contain the distinct dictionary words. Each dictionary word
contains at most four occurrences of 'y'.

Each of the next q lines starts with m, followed by m typed words. Typed words
contain no vowels other than 'a' and contain at most four occurrences of 'y'.

Constraints:
1 <= n <= 50000
1 <= q <= 1000
1 <= length of each word <= 100
The total dictionary length is at most 200000.
The total message length is at most 500000.

Output:
For each message, print "possible" followed by its unique reconstruction,
"ambiguous", or "impossible".
*/

#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

vector<string> formstr(string s) {
    vector<int> yPositions;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'y') {
            yPositions.push_back(i);
        }
        else if (s[i] == 'a' || s[i] == 'e' ||
                s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
            s[i] = 'a';
        }
    }

    vector<string> forms;
    int yCount = yPositions.size();

    for (int mask = 0; mask < 1 << yCount; mask++) {
        string current = s;

        for (int j = 0; j < yCount; j++) {
            if (mask & (1 << j)) {
                current[yPositions[j]] = 'a';
            }
        }

        forms.push_back(current);
    }

    return forms;
}

void solve() {
    int n, q;

    cin >> n >> q;

    vector<string> dict(n);

    for(int i=0; i<n; i++) {
        cin >> dict[i];
    }

    unordered_map<string, string> match;
    unordered_set<string> a;


    for(int i=0; i<n; i++){
        vector <string> forms = formstr(dict[i]);
        for ( string form : forms){
            if(!match.count(form)){
                match[form] = dict[i];
        }
        else if(match[form] != dict[i]){
            a.insert(form);
        }

    }

}

    while(q--) {
        int m;
        cin >> m;

        bool impossible = false;
        bool isamniguous = false;

        vector<string> ans;

        for(int i=0; i<m; i++) {
            string word;
            cin >> word;

            if(!match.count(word)) {
                impossible = true;
            }
            else if(a.count(word)) {
                isamniguous = true;
            }
            else ans.push_back(match[word]);
        }
    

    if(impossible) {
        cout << "impossible" << '\n';
    }
    else if(isamniguous) {
        cout << "ambiguous" << '\n';
    }
    else {
        cout << "possible";

        for(string word : ans) {
            cout << " " << word;
        }
        cout << '\n';
    }
}
    

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
