#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i % 3 == 0) cout << "x";
        else cout << "o";
    }
    cout << "\n";
    return 0;
}
