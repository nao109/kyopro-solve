#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;

    while(1){
        string before = s;
        for(int i = 0; i <= n - m; i++){
            bool all_equal = true;
            for(int j = 0; j < m; j++){
                if(s[i + j] != '#' && s[i + j] != t[j]) all_equal = false;
            }
            if(all_equal){
                s.replace(s.begin() + i, s.begin() + i + m, m, '#');
            }
        }
        if(before == s) break;
    }

    for(int i = 0; i < n; i++){
        if(s[i] != '#'){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}