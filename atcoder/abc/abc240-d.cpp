#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;

    stack<pair<int, int>> st;
    st.emplace(a[0], 1);
    ans += 1;
    cout << ans << endl;
    for(int i = 1; i < n; i++){
        if(st.empty()) st.emplace(a[i], 1);
        else if(a[i] == st.top().fi){
            int num = st.top().se;
            st.pop();
            st.emplace(a[i], num + 1);
        }
        else st.emplace(a[i], 1);

        ans += 1;

        if(st.top().fi == st.top().se){
            ans -= st.top().se;
            st.pop();
        }

        cout << ans << endl;
    }
    return 0;
}