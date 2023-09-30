#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n - 2; i++){
        if(s.substr(i, 3) == "ABC"){
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}