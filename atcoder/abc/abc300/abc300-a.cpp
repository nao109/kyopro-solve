#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, a, b;
    cin >> n >> a >> b;
    for(int i = 0; i < n; ++i){
        int c;
        cin >> c;
        if(a + b == c) cout << i + 1 << endl;
    }
    return 0;
}