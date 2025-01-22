#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, s, k;
    cin >> n >> s >> k;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int p, q;
        cin >> p >> q;
        sum += p * q;
    }
    
    if(sum < s) sum += k;
    cout << sum << endl;
    return 0;
}