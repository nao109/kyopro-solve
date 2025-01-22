#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        if(s == "For") cnt++;
    }

    if(cnt * 2 > n) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}