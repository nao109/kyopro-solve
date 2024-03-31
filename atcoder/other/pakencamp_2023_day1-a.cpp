#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    map<int, int> cnt;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(cnt.count(a)) cnt[a]++;
        else cnt[a] = 1;
    }
    
    for(auto [i, c] : cnt){
        if(c <= 10){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}
