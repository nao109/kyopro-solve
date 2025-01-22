#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    vector a(9, vector<int>(9));
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 9; i++){
        ll flag = 0;
        for(int j = 0; j < 9; j++){
            flag |= (1 << (a[i][j] - 1));
        }
        if(flag != (1 << 9) - 1){
            cout << "No\n";
            return 0;
        }
    }

    for(int j = 0; j < 9; j++){
        ll flag = 0;
        for(int i = 0; i < 9; i++){
            flag |= (1 << (a[i][j] - 1));
        }
        if(flag != (1 << 9) - 1){
            cout << "No\n";
            return 0;
        }
    }

    for(int k = 0; k < 3; k++){
        ll flag = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                flag |= (1 << (a[3 * k + i][3 * k + j] - 1));
            }
        }
        if(flag != (1 << 9) - 1){
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}