#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    set<int> taro, hanako;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        taro.insert(x);
    }
    for(int i = 1; i <= 2 * n; i++){
        if(!taro.count(i)) hanako.insert(i);
    }

    int now = 0;
    while(1){
        if(hanako.empty()) break;
        auto t = taro.upper_bound(now);
        if(t != taro.end()){
            now = *t;
            taro.erase(t);
        }
        else now = 0;

        if(taro.empty()) break;
        auto h = hanako.upper_bound(now);
        if(h != hanako.end()){
            now = *h;
            hanako.erase(h);
        }
        else now = 0;
    }

    int score_t = hanako.size(), score_h = taro.size();
    cout << score_t << "\n" << score_h << "\n";
    return 0;
}