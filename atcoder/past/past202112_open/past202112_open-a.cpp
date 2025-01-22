#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int H, W, h, w;
    cin >> H >> W >> h >> w;
    cout << ((h >= H && w <= W) ? "Yes\n" : "No\n");
    return 0;
}