#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < 2 * n + 1; i++){
        if(i % 2 == 0) cout << 1;
        else cout << 0;
    }
    cout << "\n";
    return 0;
}