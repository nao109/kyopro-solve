#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, s, t;
    cin >> n >> s >> t;

    if(s > t){
        cout << "-1\n";
        return 0;
    }

    int cnt = 0;
    while(s != t){
        t /= 2;
        cnt++;
        if(t == 0) break;
    }
    
    cout << (s == t ? cnt : -1) << endl;
    return 0;
}