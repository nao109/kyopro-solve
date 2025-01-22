#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, a;
    cin >> n >> a;
    vector<int> t(n);
    for(int i = 0; i < n; i++) cin >> t[i];

    int last = 0;
    for(int i = 0; i < n; i++){
        if(last < t[i]) last = t[i] + a;
        else last += a;
        cout << last << "\n";
    }
    return 0;
}
