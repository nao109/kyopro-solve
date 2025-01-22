#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int q;
    cin >> q;
    vector<int> a;
    int s = 0;
    while(q--){
        int t;
        cin >> t;
        if(t == 1){
            int x;
            cin >> x;
            a.push_back(x);
            s++;
        }
        else{
            int k;
            cin >> k;
            cout << a[s - k] << "\n";
        }
    }
    return 0;
}