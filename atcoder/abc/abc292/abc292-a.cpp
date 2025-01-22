#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    for(char &i : s) i = i - 'a' + 'A';
    cout << s << endl;
    return 0;
}