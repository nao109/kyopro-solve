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

    for(int i = 0; i < n - 1; i++){
        if(a[i + 1] == a[i] + 2){
            cout << a[i] + 1 << endl;
            return 0;
        }
    }
    return 0;
}