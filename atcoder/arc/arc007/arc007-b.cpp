#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, m;
    cin >> n >> m;
    // disk[i] : i番目に聞いたCDの番号
    vector<int> disk;
    disk.push_back(0);
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        disk.push_back(x);
    }

    // dcase[i] : i番のケースに入っているCDの番号
    // d[i] : i番のCDが入っているケースの番号
    map<int, int> dcase, d;
    for(int i = 0; i <= n; i++){
        dcase[i] = i;
        d[i] = i;
    }

    for(int i = 1; i <= m; i++){
        int a = dcase[0], b = disk[i];
        swap(dcase[d[a]], dcase[d[b]]);
        swap(d[a], d[b]);
    }

    for(int i = 1; i <= n; i++) cout << dcase[i] << "\n";

    return 0;
}