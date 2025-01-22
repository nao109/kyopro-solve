#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s;
    cin >> s;
    int n = s.size();

    set<string> st;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= n - i; j++){
            if(!st.count(s.substr(j, i))) st.insert(s.substr(j, i));
        }
    }
    cout << st.size() << "\n";
    return 0;
}
