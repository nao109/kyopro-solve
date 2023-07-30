#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b && b == c){
        cout << (a % 2 == 0 ? -1 : 0) << endl;
        return 0;
    }

    int cnt = 0;
    while(a % 2 == 0 && b % 2 == 0 && c % 2 == 0){
        int aa = a, bb = b, cc = c;
        a = (bb + cc) / 2;
        b = (aa + cc) / 2;
        c = (aa + bb) / 2;
        cnt++;
    }
    
    cout << cnt << endl;
    return 0;
}