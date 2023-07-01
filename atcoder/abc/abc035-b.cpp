#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    int t;
    cin >> s >> t;

    pair<int, int> now = {0, 0};
    int cnt = 0;

    for(char i : s){
        if(i == 'L') now.fi--;
        if(i == 'R') now.fi++;
        if(i == 'U') now.se++;
        if(i == 'D') now.se--;
        if(i == '?') cnt++;
    }

    if(t == 1) now.fi += (now.fi >= 0 ? cnt : -cnt);
    else{
        if(now.fi != 0){
            if(cnt < abs(now.fi)){
                now.fi += (now.fi > 0 ? -cnt : cnt);
                cnt = 0;
            }
            else{
                cnt -= abs(now.fi);
                now.fi = 0;
            }
        }

        if(now.se == 0) now.se = cnt % 2;
        else if(now.se > 0) now.se += (now.se > 0 ? -cnt : cnt);
        cnt = 0;
    }

    cout << abs(now.fi) + abs(now.se) << endl;
    return 0;
}
