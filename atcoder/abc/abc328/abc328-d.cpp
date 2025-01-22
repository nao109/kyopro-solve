#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    int n = (int)s.size();

    stack<char> st;
    for(char i : s){
        if(i != 'C') st.push(i);
        else{
            if((int)st.size() <= 1){
                st.push(i);
                continue;
            }
            char a, b, c;
            c = i;
            b = st.top();
            st.pop();
            a = st.top();
            st.pop();
            if(!(a == 'A' && b == 'B' && c == 'C')){
                st.push(a);
                st.push(b);
                st.push(c);
            }
        }
    }

    string ans = "";
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}