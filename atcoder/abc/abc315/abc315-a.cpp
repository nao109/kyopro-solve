#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    
    string ans = "";
    for(char i : s){
        if(i != 'a' && i != 'e' && i != 'i' && i != 'o' && i != 'u'){
            ans.push_back(i);
        }
    }
    cout << ans << endl;
    return 0;
}