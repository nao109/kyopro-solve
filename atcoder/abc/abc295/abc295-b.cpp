#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int r, c;
    cin >> r >> c;
    vector<string> b(r);
    for(int i = 0; i < r; ++i) cin >> b[i];

    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            if('1' <= s[i][j] && s[i][j] <= '9'){
                for(int k = 0; k < r; ++k){
                    for(int l = 0; l < c; ++l){
                        if(abs(i - k) + abs(j - l) <= s[i][j] - '0'){
                            if('1' <= s[i][j] && s[i][j] <= '9') continue;
                            s[i][j] = '.';
                        }
                    }
                }
            }
        }
    }
    return 0;
}