#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s;
    cin >> s;
    if(s.front() == '<' && s.back() == '>'){
        for(auto i = 1; i < (int)s.size() - 1; i++){
            if(s[i] != '='){
                cout << "No\n";
                return 0;
            }
        }
        cout << "Yes\n";
    }
    else cout << "No\n";
    return 0;
}
