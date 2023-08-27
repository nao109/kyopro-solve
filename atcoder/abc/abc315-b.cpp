#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int m;
    cin >> m;
    vector<int> d(m);
    int sum_day = 0;
    for(int i = 0; i < m; ++i){
        cin >> d[i];
        sum_day += d[i];
    }

    int cnt = 0;
    for(int i = 0; i < m; i++){
        if(cnt + d[i] < (sum_day + 1) / 2) cnt += d[i];
        else{
            cout << i + 1 << " " << (sum_day + 1) / 2 - cnt << endl;
            break;
        }
    }
    return 0;
}