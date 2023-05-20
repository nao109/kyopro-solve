#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    sort(s.begin(), s.end());

    do{
        bool flag = true;
        for(int i = 0; i < n - 1; i++){
            int diff = 0;
            for(int j = 0; j < m; j++){
                if(s[i][j] != s[i + 1][j]) diff++;
            }
            if(diff > 1) flag = false;
        }
        if(flag){
            cout << "Yes\n";
            return 0;
        }
    }while(next_permutation(s.begin(), s.end()));
    cout << "No\n";
    return 0;
}