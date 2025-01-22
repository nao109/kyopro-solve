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

    for(int i = 0; i < n; i++){
        int dist_2 = -1;
        int id = 0;
        for(int j = 0; j < n; j++){
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];
            int d2 = dx * dx + dy * dy;
            if(dist_2 < d2){
                dist_2 = d2;
                id = j + 1;
            }
        }
        cout << id << "\n";
    }
    return 0;
}
