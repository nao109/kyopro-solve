#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, q;
    string s;
    cin >> n >> q >> s;
    int first = 0;
    while(q--){
        int t, x;
        cin >> t >> x;
        if(t == 1) first = (first + n - x) % n;
        else cout << s[(first + x - 1 + n) % n] << endl;
    }
    return 0;
}