#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    int n = s.size();
    int b1 = -1, b2 = -1, r1 = -1, r2 = -1, k = -1;
    for(int i = 0; i < n; ++i){
        if(s[i] == 'B'){
            if(b1 == -1) b1 = i;
            else b2 = i;
        }
        if(s[i] == 'R'){
            if(r1 == -1) r1 = i;
            else r2 = i;
        }
        if(s[i] == 'K') k = i;
    }
    
    if(b1 % 2 != b2 % 2){
        if(r1 < k && k < r2) cout << "Yes\n";
        else cout << "No\n";
    }
    else cout << "No\n";
    return 0;
}