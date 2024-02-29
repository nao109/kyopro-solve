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

    queue<int> mul2, mul4, odd;
    for(int i = 0; i < n; i++){
        if(a[i] % 4 == 0) mul4.push(a[i]);
        else if(a[i] % 2 == 0) mul2.push(a[i]);
        else odd.push(a[i]);
    }

    vector<int> ans(n);

    int cnt = 0;
    while(!odd.empty()){
        ans[cnt] = odd.front();
        odd.pop();
        cnt += 2;
        if(cnt >= n) break;
    }

    for(int i = 0; i < n; i++){
        if(ans[i] == 0 && !mul4.empty()){
            ans[i] = mul4.front();
            mul4.pop();
        }
    }

    for(int i = 0; i < n; i++){
        if(ans[i] == 0 && !mul2.empty()){
            ans[i] = mul2.front();
            mul2.pop();
        }
    }

    bool flag = true;
    for(int i = 1; i < n; i++){
        if(ans[i] == 0) flag = false;
    }
    for(int i = 1; i < n; i++){
        if(ans[i - 1] * ans[i] % 4 != 0) flag = false;
    }

    cout << (flag ? "Yes\n" : "No\n");
    return 0;
}