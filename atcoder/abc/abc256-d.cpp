#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    vector<int> imos(200001);
    for(int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;
        imos[l]++;
        imos[r]--;
    }

    int h = 0;
    for(int i = 0; i <= 200000; i++){
        if(h == 0){
            h += imos[i];
            if(h > 0) cout << i << " ";
        }
        else if(h > 0){
            h += imos[i];
            if(h == 0) cout << i << "\n";
        }
    }
    return 0;
}