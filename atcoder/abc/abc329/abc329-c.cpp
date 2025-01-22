#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;

    map<char, int> count;

    char sub = s[0];
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(s[i] == sub) cnt++;
        else{
            count[sub] = max(count[sub], cnt);
            sub = s[i];
            cnt = 1;
        }
    }
    count[sub] = max(count[sub], cnt);

    int ans = 0;
    for(auto [c, i] : count) ans += i;
    cout << ans << endl;
    return 0;
}