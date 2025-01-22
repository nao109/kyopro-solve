#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, k;
    cin >> n >> k;
    queue<int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.push(x);
    }

    int ans = 0;
    int num = k;
    while(!a.empty()){
        while(a.front() <= num && !a.empty()){
            num -= a.front();
            a.pop();
        }
        ans++;
        num = k;
    }
    cout << ans << "\n";
    return 0;
}
