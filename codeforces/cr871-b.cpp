#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
 
void solve(){
    int n;
    cin >> n;
    vector<int> count;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a == 0) cnt++;
        else{
            count.push_back(cnt);
            cnt = 0;
        }
    }
    count.push_back(cnt);
    sort(count.begin(), count.end());
    cout << count.back() << endl;
}
 
int main(){
    int q;
    cin >> q;
    while(q--) solve();
    return 0;
}