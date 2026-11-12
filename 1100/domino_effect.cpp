#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n>>s;

    int i = 0, j = 0;

    while(i < n && j < n){
        
        if(j<n && i == j && s[i] == 'R'){
            j = i + 1;
            while (j < n && s[j] == '.') {
                ++j;
            }
            if(j < n && s[j] == 'L'){
                int path = j - i - 1;
                int start = i;

                ++i;
                while (i < j) {
                    if (i <= start + path / 2) {
                        s[i] = 'R';
                    }
                    else if (i > start + (path - path / 2)) {
                        s[i] = 'L';
                    }
                    ++i;
                }

                i = j;
            }
        else if (j == n) {
            while (i + 1 < n) {
                s[++i] = 'R';
            }
        }
        else if(j < n && s[j] == 'R'){
            while(i < j){
                s[i++] = 'R';
        }
    }
}

        else if(j<n && i == j && s[i] == 'L'){
            j = i + 1;
            while (j < n && s[j] == '.') {
                ++j;
            }

            if (j == n) {
                i = n;
            }
            else if (j < n && s[j] == 'R'){
                i = j;
            }
            else if (j < n && s[j] == 'L'){
                while (i < j)
                {
                    s[i++] = 'L';
                }
            }
        }


        else if (s[j] == '.')
            j++;

        else if (s[j] == 'L')
        {
            while (i < j && s[i] == '.')
            {
                s[i] = 'L';
                i++;
            }
        }
        else if (s[j] == 'R')
        {
            i = j;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '.') cnt++;
    }

    cout << cnt << endl;
}

int main(){
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
