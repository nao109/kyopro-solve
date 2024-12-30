#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    vector<int> a(3);
    for(int i = 0; i < 3; i++) cin >> a[i];
    sort(a.begin(), a.end());

    if(a[0] == a[2]) cout << "Yes\n";
    else if(a[0] + a[1] == a[2]) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
