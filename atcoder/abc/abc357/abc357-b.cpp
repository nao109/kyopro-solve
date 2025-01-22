#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s;
    cin >> s;

    int n = s.size();
    int upper = 0, lower = 0;
    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z') upper++;
        else lower++;
    }

    for(int i = 0; i < n; i++){
        if(upper > lower){
            if(s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 'a' + 'A';
        }
        else{
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
        }
    }
    cout << s << "\n";
    return 0;
}
