#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, k;
    cin >> n >> k;
    set<int> a;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        a.insert(x);
    }

    int chk = -1;
    set<int> ans;
    for(int i : a){
        if(chk == i - 1 && k > 0){
            ans.insert(i);
            chk = i;
            k--;
        }
    }

    cout << ans.size() << endl;
    return 0;
}