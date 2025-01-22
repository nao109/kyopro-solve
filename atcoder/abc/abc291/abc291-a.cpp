#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    int ss = s.size();
    for(int i = 0; i < ss; ++i){
        if('A' <= s[i] && s[i] <= 'Z') cout << i + 1 << endl;
    }
    return 0;
}