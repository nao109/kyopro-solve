#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    queue<int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push(x);
    }

    stack<int> st;
    st.push(a.front());
    a.pop();
    while(!a.empty()){
        st.push(a.front());
        a.pop();

        while(1){
            int st1 = st.top();
            st.pop();
            if(st.empty()){
                st.push(st1);
                break;
            }
            int st2 = st.top();
            st.pop();
            if(st1 == st2) st.push(st1 + 1);
            else{
                st.push(st2);
                st.push(st1);
                break;
            }
        }
    }
    cout << st.size() << "\n";
    return 0;
}
