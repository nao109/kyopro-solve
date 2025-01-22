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

    vector<pair<int, int>> ans;

    for(int i = 0; i < n - 8; i++){
        for(int j = 0; j < m - 8; j++){
            bool flag = true;
            for(int k = i; k < i + 4; k++){
                for(int l = j; l < j + 4; l++){
                    if(k < i + 3 && l < j + 3){
                        if(s[k][l] == '.') flag = false;
                    }
                    else if(s[k][l] == '#') flag = false;
                }
            }

            for(int k = i + 5; k < i + 9; k++){
                for(int l = j + 5; l < j + 9; l++){
                    if(k > i + 5 && l > j + 5){
                        if(s[k][l] == '.') flag = false;
                    }
                    else if(s[k][l] == '#') flag = false;
                }
            }

            if(flag) ans.emplace_back(i + 1, j + 1);
        }
    }

    sort(ans.begin(), ans.end());
    for(auto i : ans) cout << i.fi << " " << i.se << endl;
    return 0;
}