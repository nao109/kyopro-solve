#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i += 4){
        if(s.substr(i, 4) == "post"){
            cout << i / 4 + 1 << endl;
            return 0;
        }
    }
    cout << "none\n";
    return 0;
}