#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s;
    cin >> s;
    int num = stoi(s.substr(3, 3));
    if(1 <= num && num <= 349 && num != 316) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
