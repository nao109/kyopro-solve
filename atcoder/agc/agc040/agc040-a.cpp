#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    int n = s.size() + 1;

    vector<ll> a(n, 0);
    for(int i = 0; i < n - 1; i++){
        if(s[i] == '<') a[i + 1] = a[i] + 1;
    }
    for(int i = n - 2; i >= 0; i--){
        if(s[i] == '>') a[i] = max(a[i], a[i + 1] + 1);
    }

    ll sum = 0;
    for(int i = 0; i < n; i++) sum += a[i];
    cout << sum << endl;
    return 0;
}