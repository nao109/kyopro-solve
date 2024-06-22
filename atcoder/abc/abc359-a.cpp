#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;

    int ans = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s == "Takahashi") ans++;
    }
    cout << ans << "\n";
    return 0;
}
