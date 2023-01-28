#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s, t;
    cin >> s >> t;
    int ss = s.size();
    int ts = t.size();

    int ok = 0;
    for(int i = 0; i < ts; ++i){
        if(s[ss - ts + i] == '?' || t[i] == '?' || s[ss - ts + i] == t[i]) ok++;
    }
    cout << (ok == ts ? "Yes\n" : "No\n");

    for(int i = 0; i < ts; ++i){
        if(s[ss - ts + i] == '?' || t[i] == '?' || s[ss - ts + i] == t[i]) ok--;
        if(s[i] == '?' || t[i] == '?' || s[i] == t[i]) ok++;
        cout << (ok == ts ? "Yes\n" : "No\n");
    }
    return 0;
}