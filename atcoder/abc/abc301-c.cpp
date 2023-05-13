#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    set<char> atcoder;
    atcoder.insert('a');
    atcoder.insert('t');
    atcoder.insert('c');
    atcoder.insert('o');
    atcoder.insert('d');
    atcoder.insert('e');
    atcoder.insert('r');

    string s, t;
    cin >> s >> t;

    map<char, int> ss, ts;
    for(char i : s){
        if(!ts.count(i)) ts[i] = 0;

        if(ss.count(i)) ss[i]++;
        else ss[i] = 1;
    }
    for(char i : t){
        if(!ss.count(i)) ss[i] = 0;

        if(ts.count(i)) ts[i]++;
        else ts[i] = 1;
    }

    for(auto [i, num] : ss){
        if(i == '@') continue;

        int pre = min(ss[i], ts[i]);
        ss[i] -= pre, ts[i] -= pre;
    }
    for(auto [i, num] : ts){
        if(i == '@') continue;

        int pre = min(ss[i], ts[i]);
        ss[i] -= pre, ts[i] -= pre;
    }

    // for(auto i : ss) cout << i.fi << " " << i.se << endl;
    // for(auto i : ts) cout << i.fi << " " << i.se << endl;

    for(auto [i, num] : ss){
        if(i == '@' || !atcoder.count(i)) continue;
        
        if(ss[i] < ts[i]){
            ss['@'] -= ts[i] - ss[i];
            ss[i] = ts[i];
        }
        else if(ss[i] > ts[i]){
            ts['@'] -= ss[i] - ts[i];
            ts[i] = ss[i];
        }
    }

    for(auto [i, num] : ts){
        if(i == '@' || !atcoder.count(i)) continue;
        
        if(ss[i] < ts[i]){
            ss['@'] -= ts[i] - ss[i];
            ss[i] = ts[i];
        }
        else if(ss[i] > ts[i]){
            ts['@'] -= ss[i] - ts[i];
            ts[i] = ss[i];
        }
    }

    // for(auto i : ss) cout << i.fi << " " << i.se << endl;
    // for(auto i : ts) cout << i.fi << " " << i.se << endl;

    bool flag = true;
    for(auto [i, num] : ss){
        if(ss[i] != ts[i]) flag = false;
    }
    cout << (flag ? "Yes\n" : "No\n");
    return 0;
}