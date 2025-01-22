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
    sort(a.begin(), a.end());

    for(int i = n - 1; i < n; i++){
        if(a[i] != a.back()){
            cout << a[i] << endl;
            return 0;
        }
    }
    return 0;
}