#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;

    vector<string> ans;

    for(int i = 0; i < (1 << n); i++){
        string s;
        for(int bit = 0; bit < n; bit++){
            if(i & (1 << bit)) s.push_back('(');
            else s.push_back(')');
        }

        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(s[j] == '(') cnt++;
            else cnt--;
            if(cnt < 0) break;
        }

        if(cnt == 0) ans.push_back(s);
    }

    sort(ans.begin(), ans.end());
    for(string i : ans) cout << i << endl;
    return 0;
}