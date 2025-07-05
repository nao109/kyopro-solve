#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s, t;
    cin >> s >> t;
    set<char> st;
    for(char c : t) st.insert(c);

    bool ans = true;
    for(int i = 1; i < (int)s.size(); i++){
        if('A' <= s[i] && s[i] <= 'Z'){
            if(!st.count(s[i - 1])) ans = false;
        }
    }

    cout << (ans ? "Yes\n" : "No\n");
    return 0;
}
