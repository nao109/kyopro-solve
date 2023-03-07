#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;
    if(s[n - 1] == 'G') s.pop_back();
    else s += "G";
    cout << s << endl;
    return 0;
}