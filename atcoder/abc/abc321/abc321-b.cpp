#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n - 1);
    int sum = 0;
    for(int i = 0; i < n - 1; i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());

    for(int i = 0; i <= 100; i++){
        if(i <= a[0]){
            if(sum - a[n - 2] >= x){
                cout << i << endl;
                return 0;
            }
        }
        else if(i < a[n - 2]){
            if(sum + i - a[0] - a[n - 2] >= x){
                cout << i << endl;
                return 0;
            }
        }
        else{
            if(sum - a[0] >= x){
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}