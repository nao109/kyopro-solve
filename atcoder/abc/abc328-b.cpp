#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int d;
        cin >> d;
        if(i < 10 || (i < 100 && i % 10 == i / 10)){
            for(int j = 1; j <= d; j++){
                if(i < 10){
                    if(j < 10 && j == i) ans++;
                    else if(j < 100 && j % 10 == i) ans++;
                }
                else if(i < 100){
                    if(j < 10 && j == i % 10) ans++;
                    else if(j < 100 && j % 10 == i % 10) ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}