#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(s[i] == '|') cnt++;
        if(s[i] == '*'){
            if(cnt == 1) cout << "in\n";
            else cout << "out\n";
        }
    }
    cout << endl;
    return 0;
}