#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s;
    cin >> s;
    bool del = false;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == '|') del = !del;
        if(!del && s[i] != '|') cout << s[i];
    }
    cout << "\n";
    return 0;
}