#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
 
void solve(){
    string xop = "XO+";
    vector<string> s(3);
    for(int i = 0; i < 3; i++) cin >> s[i];
 
    bool flag = true;
 
    for(char i : xop){
        for(int j = 0; j < 3; j++){
            flag = true;
            for(int k = 0; k < 3; k++){
                if(s[j][k] != i) flag = false;
            }
            if(flag){
                cout << i << endl;
                return;
            }
        }
 
        for(int j = 0; j < 3; j++){
            flag = true;
            for(int k = 0; k < 3; k++){
                if(s[k][j] != i) flag = false;
            }
            if(flag){
                cout << i << endl;
                return;
            }
        }
 
        flag = true;
        for(int j = 0; j < 3; j++){
            if(s[j][j] != i) flag = false;
        }
        if(flag){
            cout << i << endl;
            return;
        }
 
        flag = true;
        for(int j = 0; j < 3; j++){
            if(s[j][2 - j] != i) flag = false;
        }
        if(flag){
            cout << i << endl;
            return;
        }
    }
 
    cout << "DRAW\n";
}
 
int main(){
    int q;
    cin >> q;
    while(q--) solve();
    return 0;
}
