#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second


int main(){
    while(1){
        int n;
        cin >> n;
        
        if(n == 0) break;

        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        int ans = 0;

        for(int i = 1; i < n - 1; i++){
            if(v[i] > v[i - 1] && v[i] > v[i + 1]){
                ans++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
