#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s;
    cin >> s;
    for(char c : s){
        if(c != '.') cout << c << "\n";
    }
    return 0;
}
