#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
    string s;
    cin >> s;

    map<int, map<int, char>> line;
    for(int i = 0; i < n; i++) line[y[i]][x[i]] = s[i];

    bool flag = false;
    for(auto i : line){
        bool isr = false;
        for(auto j : i.se){
            if(j.se == 'R') isr = true;
            if(isr && j.se == 'L') flag = true;
        }
    }

    cout << (flag ? "Yes\n" : "No\n");
    return 0;
}