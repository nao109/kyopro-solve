#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int x, y;
    cin >> x >> y;
    set<int> divx, divy;
    for(int i = 1; i * i <= x; ++i){
        if(x % i == 0) divx.insert(i), divx.insert(x / i);
    }
    for(int i = 1; i * i <= y; ++i){
        if(y % i == 0) divy.insert(i), divy.insert(y / i);
    }

    int cnt_x = (int)divx.size(), cnt_y = (int)divy.size();
    if(cnt_x == cnt_y) cout << "Z\n";
    else cout << (cnt_x > cnt_y ? "X\n" : "Y\n");
    return 0;
}