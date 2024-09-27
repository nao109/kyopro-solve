#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int l, r;
    cin >> l >> r;
    if(l ^ r == 0) cout << "Invalid\n";
    else if(l == 0) cout << "No\n";
    else cout << "Yes\n";
    return 0;
}
