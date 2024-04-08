#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, d;
    cin >> n >> d;
    vector<int> a(n * 2);
    for(int i = 0; i < n * 2; i++) cin >> a[i];
    sort(a.begin(), a.end());

    for(int i = 0; i < n * 2; i += 2){
        if(a[i + 1] - a[i] > d){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}
