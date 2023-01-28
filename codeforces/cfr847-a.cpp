#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int t;
    cin >> t;
    string ans = "314159265358979323846264338327";
    for(int i = 0; i < t; ++i){
        string s;
        cin >> s;
        int ss = s.size();
        int cnt = 0;
        for(int i = 0; i < ss; ++i){
            if(s[i] == ans[i]){
                cnt++;
            }
            else break;
        }
        cout << cnt << endl;
    }
    return 0;
}