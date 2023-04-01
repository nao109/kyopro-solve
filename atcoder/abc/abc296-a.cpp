#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n - 1; ++i){
        if(s[i + 1] == s[i]){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}