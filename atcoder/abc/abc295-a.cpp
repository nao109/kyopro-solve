#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string s;
        cin >> s;
        if(s == "and" || s == "not" || s == "that" || s == "the" || s == "you"){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}