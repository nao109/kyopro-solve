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
    
    for(int i = 1; i < n; i++){
        if(a[i - 1] != a[i]){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}