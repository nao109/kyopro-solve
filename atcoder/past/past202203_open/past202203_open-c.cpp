#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string alpha;
    cin >> alpha;
    int as = alpha.size();
    cerr << as << endl;
    cerr << (as + 2) / 3 << endl;
    for(int i = 0; i < as - ((as - 1) / 3) * 3; i++) cout << alpha[i];
    if((as - 1) / 3 == 0) cout << '\n';
    else cout << (char)('a' + (as - 1) / 3 - 1) << '\n';
    return 0;
}