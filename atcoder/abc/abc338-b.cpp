#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s;
    cin >> s;
    map<char, int> cnt;
    for(char i : s) cnt[i]++;

    vector<pair<int, char>> cnts;
    for(auto i : cnt) cnts.push_back({-i.se, i.fi});
    sort(cnts.begin(), cnts.end());
    
    cout << cnts[0].se << "\n";
    return 0;
}