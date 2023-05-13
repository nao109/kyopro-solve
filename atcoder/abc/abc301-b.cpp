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

    cout << a[0] << " ";
    for(int i = 1; i < n; i++){
        if(a[i - 1] == a[i] + 1) cout << a[i] << " \n"[i == n - 1];
        else if(a[i - 1] == a[i] - 1) cout << a[i] << " \n"[i == n - 1];
        else if(a[i - 1] < a[i]){
            for(int j = a[i - 1] + 1; j < a[i]; j++){
                cout << j << " ";
            }
            cout << a[i] << " \n"[i == n - 1];
        }
        else if(a[i - 1] > a[i]){
            for(int j = a[i - 1] - 1; j > a[i]; j--){
                cout << j << " ";
            }
            cout << a[i] << " \n"[i == n - 1];
        }
    }
    return 0;
}