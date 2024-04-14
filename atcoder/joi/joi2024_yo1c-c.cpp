#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        if(s[i] != s[0]){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}
