#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, l, t, x;
    cin >> n >> l >> t >> x;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

    for(int i = 0; i < n; i++){
        if(a[i] > t && b[i] >= l){
            cout << "forever\n";
            return 0;
        }
    }

    int ans = 0;

    int count = 0;
    queue<int> que;
    que.push(0);

    while(!que.empty()){
        int v = que.front();
        que.pop();
        cerr << v << "\n";

        if(v == n) break;

        if(b[v] < l){
            count = 0;
            ans += a[v];
            que.push(v + 1);
        }
        else{
            if(a[v] < t - count){
                count += a[v];
                ans += a[v];
                que.push(v + 1);
            }
            else if(a[v] > t - count){
                ans += t - count + x;
                count = 0;
                que.push(v);
            }
            else if(a[v] == t - count){
                ans += a[v] + x;
                count = 0;
                que.push(v + 1);
            }
        }
    }

    cout << ans << "\n";
    return 0;
}