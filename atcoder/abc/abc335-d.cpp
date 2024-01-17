#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;

    vector<vector<int>> p(n, vector<int>(n, -1));
    int y = (n - 1) / 2, x = (n - 1) / 2;
    int loop = 0, shift = 0;
    for(int i = 1; i < n * n; i++){
        if(i == (loop * 2 + 1) * (loop * 2 + 1)){
            loop++;
            shift = 0;
            x++;
        }
        else{
            shift++;
            if(shift >= loop * 6) x++;
            else if(shift >= loop * 4) y--;
            else if(shift >= loop * 2) x--;
            else y++;
        }
        p[y][x] = i;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == (n - 1) / 2 && j == (n - 1) / 2) cout << "T ";
            else cout << p[i][j] << " \n"[j == n - 1];
        }
    }
    return 0;
}