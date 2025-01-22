#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int c[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> c[i][j];
        }
    }

    vector<int> p(9);
    for(int i = 0; i < 9; i++) p[i] = i;
    int cnt = 0;
    do {
        vector<vector<int>> x(3), y(3);
        vector<int> ii, ji;
        
        for(int i = 0; i < 9; i++){
            int h = p[i] / 3, w = p[i] % 3;
            x[h].push_back(c[h][w]);
            y[w].push_back(c[h][w]);
            if(h == w) ii.push_back(c[h][w]);
            if(h + w == 2) ji.push_back(c[h][w]);
        }

        bool flag = false;
        for(int i = 0; i < 3; i++){
            if(x[i][0] == x[i][1] && x[i][1] != x[i][2]) flag = true;
            if(y[i][0] == y[i][1] && y[i][1] != y[i][2]) flag = true;
        }
        if(ii[0] == ii[1] && ii[1] != ii[2]) flag = true;
        if(ji[0] == ji[1] && ji[1] != ji[2]) flag = true;

        if(flag) cnt++;
    }while(next_permutation(p.begin(), p.end()));

    int factorial_9 = 1;
    for(int i = 1; i <= 9; i++) factorial_9 *= i;
    long double ans = (factorial_9 - cnt) / (long double)factorial_9;
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}