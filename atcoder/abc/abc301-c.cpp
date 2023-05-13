#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s, t;
    cin >> s >> t;

    map<char, int> scnt, tcnt;
    for(char i : s){
        if(scnt.count(i)) scnt[i]++;
        else scnt[i] = 1;
    }
    for(char i : t){
        if(tcnt.count(i)) tcnt[i]++;
        else tcnt[i] = 1;
    }

    for(char i : "atcoder"){
        int m = max(scnt[i], tcnt[i]);

        if(scnt['@'] < m - scnt[i] || tcnt['@'] < m - tcnt[i]){
            cout << "No\n";
            return 0;
        }
        scnt['@'] -= m - scnt[i];
        scnt[i] = m;
        tcnt['@'] -= m - tcnt[i];
        tcnt[i] = m;
    }

    bool flag = true;
    for(char i : s + t){
        if(scnt[i] != tcnt[i]) flag = false;
    }
    cout << (flag ? "Yes\n" : "No\n");
    return 0;
}