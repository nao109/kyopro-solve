#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];

    int ans = 0;
    for(int i = 1; i <= 100; i++){
        for(int j = 0; j < n; j++){
            if(j == 0){
                if(h[j] >= i) ans++;
            }
            else if(h[j - 1] < i && h[j] >= i) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}