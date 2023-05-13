#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    ll n;
    cin >> s >> n;
    int ss = (int)s.size();

    ll num = 0;
    for(int i = 0; i < ss; i++){
        if(s[i] == '1') num += (1ll << (ss - 1 - i));
    }

    if(num > n){
        cout << "-1\n";
        return 0;
    }

    for(int i = 0; i < ss; i++){
        if(s[i] == '?'){
            if((1ll << (ss - 1 - i)) + num <= n) num += (1ll << (ss - 1 - i));
        }
    }

    cout << num << endl;
    return 0;
}