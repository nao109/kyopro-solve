#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, s, m, l;
    cin >> n >> s >> m >> l;

    int ans = 1e9;
    for(int i = 0; i <= 100; i++){
        for(int j = 0; j <= 100; j++){
            for(int k = 0; k <= 100; k++){
                if(i * 6 + j * 8 + k * 12 >= n){
                    ans = min(ans, s * i + m * j + l * k);
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}