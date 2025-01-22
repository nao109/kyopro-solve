#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int t, n;
    cin >> t >> n;
    vector p(t, vector<int>(n));
    for(int i = 0; i < t; i++){
        for(int j = 0; j < n; j++){
            cin >> p[i][j];
        }
    }

    vector<int> ma(n, 0);
    int sum = 0;

    for(int j = 0; j < n; j++){
        ma[j] = p[0][j];
        sum += p[0][j];
    }

    for(int k = 0; k < t; k++){
        for(int j = 0; j < n; j++){
            if(ma[j] < p[k][j]){
                sum += p[k][j] - ma[j];
                ma[j] = p[k][j];
            }
        }
        cout << sum << endl;
    }
    return 0;
}