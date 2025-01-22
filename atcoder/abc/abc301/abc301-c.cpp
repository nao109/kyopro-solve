#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s, t;
    cin >> s >> t;

    map<char, int> ss, ts;
    for(char i : s){
        if(ss.count(i)) ss[i]++;
        else ss[i] = 1;
    }
    for(char i : t){
        if(ts.count(i)) ts[i]++;
        else ts[i] = 1;
    }

    string atcoder = "atcoder";
    for(char i : atcoder){
        if(ss[i] == ts[i]) continue;

        int diff = abs(ts[i] - ss[i]);
        if(ss[i] < ts[i]){
            ss['@'] -= diff;
            ss[i] += diff;
        }
        else{
            ts['@'] -= diff;
            ts[i] += diff;
        }
    }

    bool flag = true;
    for(char i : s + t){
        if(ss[i] != ts[i]) flag = false;
    }
    flag &= (ss['@'] >= 0 && ts['@'] >= 0);
    cout << (flag ? "Yes\n" : "No\n");
    return 0;
}
