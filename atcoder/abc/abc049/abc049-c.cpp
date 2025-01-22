#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    int n = s.size();

    for(int i = 0; i < n;){
        if(s.substr(i, 5) == "maerd") i += 5;
        else if(s.substr(i, 5) == "esare") i += 5;
        else if(s.substr(i, 7) == "remaerd") i += 7;
        else if(s.substr(i, 6) == "resare") i += 6;
        else{
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}