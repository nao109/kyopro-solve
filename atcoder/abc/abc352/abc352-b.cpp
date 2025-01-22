#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s, t;
    cin >> s >> t;

    int j = 0;
    for(int i = 0; i < (int)t.size(); i++){
        if(t[i] == s[j]){
            cout << i + 1 << " \n"[j == (int)s.size() - 1];
            j++;
        }
    }
    return 0;
}
