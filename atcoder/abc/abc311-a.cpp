#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;
    bool isa = false, isb = false, isc = false;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A') isa = true;
        if(s[i] == 'B') isb = true;
        if(s[i] == 'C') isc = true;

        if(isa && isb && isc){
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}