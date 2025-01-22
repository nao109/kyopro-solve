#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n / 2; ++i){
        cout << s[2 * i + 1] << s[2 * i];
    }
    cout << endl;
    return 0;
}