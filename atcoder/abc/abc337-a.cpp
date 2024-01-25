#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    int taka = 0, aoki = 0;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        taka += x;
        aoki += y;
    }
    
    if(taka > aoki) cout << "Takahashi\n";
    else if(taka < aoki) cout << "Aoki\n";
    else cout << "Draw\n";
    return 0;
}