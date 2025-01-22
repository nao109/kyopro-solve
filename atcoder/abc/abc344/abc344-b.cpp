#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    vector<int> a;
    while(1){
        int x;
        cin >> x;
        a.push_back(x);
        if(a.back() == 0) break;
    }
    
    int n = a.size();
    for(int i = n - 1; i >= 0; i--) cout << a[i] << "\n";
    return 0;
}