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

    set<int> s;
    for(int i = 0; i < n; i++) s.insert(a[i]);

    for(int i = 0; i < n; i++){
        if(s.count(a[i] + 3) && s.count(a[i] + 6)){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}