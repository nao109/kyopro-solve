#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s;
    cin >> s;
    map<char, int> cnt;
    for(char i : s){
        if(!cnt.count(i)) cnt[i] = 1;
        else cnt[i]++;
    }
    map<char, int> kinds;
    for(auto [i, c] : cnt){
        if(!kinds.count(c)) kinds[c] = 1;
        else kinds[i]++;
    }

    for(auto [i, k] : kinds){
        if(k != 0 && k != 2){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}
