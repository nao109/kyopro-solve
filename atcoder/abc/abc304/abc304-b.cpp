#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string n;
    cin >> n;
    for(int i = 3; i < (int)n.size(); i++) n[i] = '0';
    cout << n << endl;
    return 0;
}