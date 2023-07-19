#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll n;
    cin >> n;

    vector<ll> last_x(30, 1);

    for(int i = 0; i < 30; i++){
        for(int j = 0; j < 30; j++){
            last_x[i] *= 3;
            if(i == j) last_x[i]++;
        }
    }

    for(int i = 0; i < 30; i++){
        if(n == last_x[i]){
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}