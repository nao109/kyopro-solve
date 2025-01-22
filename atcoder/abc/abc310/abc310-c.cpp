#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    set<string> s;
    for(int i = 0; i < n; i++){
        string t;
        cin >> t;
        s.insert(t);
    }

    int ans = s.size();

    for(string i : s){
        string rev = i;
        reverse(rev.begin(), rev.end());

        if(i == rev) continue;
        if(s.count(rev)){
            ans--;
            s.erase(rev);
        }
    }

    cout << ans << endl;
    return 0;
}