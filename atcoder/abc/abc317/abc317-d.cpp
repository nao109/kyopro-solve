#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

using pii = pair<int, int>;
bool compare(tuple<int, int, int> a, tuple<int, int, int> b){
    int x1, y1, z1, x2, y2, z2;
    tie(z1, x1, y1) = a;
    tie(z2, x2, y2) = b;
    return (x1 + y1 + 1) / 2 - x1 < (x2 + y2 + 1) / 2 - x2;
}

int main(){
    int n;
    cin >> n;
    vector<tuple<int, int, int>> zxy;

    int taka = 0, sum = 0;
    for(int i = 0; i < n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        sum += z;

        if(x > y) taka += z;
        else zxy.emplace_back(z, x, y);
    }

    sort(zxy.begin(), zxy.end(), compare);

    if(sum < taka * 2){
        cout << 0 << endl;
        return 0;
    }
    
    int ans = 0;
    for(auto [z, x, y] : zxy){
        ans += (x + y + 1) / 2 - x;
        taka += z;
        if(sum < taka * 2) break;
    }
    cout << ans << endl;
    return 0;
}