#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;

    vector<pair<char, int>> d;
    int cnt = 0;
    char c;
    for(int i = 0; i < n; ++i){
        if(i == 0){
            c = s[i];
            cnt++;
        }
        else if(c == s[i]) cnt++;
        else{
            d.emplace_back(c, cnt);
            c = s[i];
            cnt = 1;
        }
    }
    d.emplace_back(c, cnt);

    int ds = d.size();
    int x = -1;
    for(int i = 0; i < ds; ++i){
        if(d[i].fi == 'o'){
            if(x < d[i].se){
                if((i > 0 && d[i - 1].fi == '-')) x = d[i].se;
                if((i < ds - 1 && d[i + 1].fi == '-')) x = d[i].se;
            }
        }
    }

    cout << x << endl;
    return 0;
}