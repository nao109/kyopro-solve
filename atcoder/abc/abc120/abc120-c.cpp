#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    int n = s.size();
    stack<char> st;
    st.push(s[0]);
    for(int i = 1; i < n; i++){
        if(st.empty() || st.top() == s[i]) st.push(s[i]);
        else st.pop();
    }

    int ans = n - (int)st.size();
    cout << ans << endl;
    return 0;
}