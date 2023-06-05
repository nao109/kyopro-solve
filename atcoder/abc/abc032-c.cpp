#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    int ans = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == 0){
            cout << n << endl;
            return 0;
        }
    }

    int right = 0;
    ll sum = 1;
    for(int left = 0; left < n; left++){
        while(right < n && sum * s[right] <= k){
            sum *= s[right];
            right++;
        }

        ans = max(ans, right - left);

        if(right == left) right++;
        else sum /= s[left];
    }

    cout << ans << endl;
    return 0;
}