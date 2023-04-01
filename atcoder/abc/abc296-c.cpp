#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, x;
    cin >> n >> x;
    set<int> a;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        a.insert(x);
    }
    
    for(int i : a){
        if(a.count(i + x) || a.count(i - x)){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}