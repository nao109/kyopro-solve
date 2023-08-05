#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll n, x;
    string s;
    cin >> n >> x >> s;

    stack<char> st;
    for(int i = 0; i < n; i++){
        if(st.empty()) st.push(s[i]);
        else if((st.top() == 'L' || st.top() == 'R') && s[i] == 'U') st.pop();
        else st.push(s[i]);
    }

    string t = "";
    while(!st.empty()){
        t.push_back(st.top());
        st.pop();
    }
    reverse(t.begin(), t.end());

    for(int i = 0; i < (int)t.size(); i++){
        if(t[i] == 'U') x /= 2;
        else if(t[i] == 'L') x *= 2;
        else x = x * 2 + 1;
    }

    cout << x << endl;
    return 0;
}