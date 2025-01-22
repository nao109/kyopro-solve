#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for(int i = 0; i < n; i++) cin >> c[i];

    int ans = 0;

    int right = 0;
    map<int, int> candy;
    for(int left = 0; left < n; left++){
        while(right < n && right - left < k){
            candy[c[right]]++;
            right++;
        }

        ans = max(ans, (int)candy.size());

        if(right == left) right++;
        else candy[c[left]]--;

        if(candy[c[left]] <= 0) candy.erase(c[left]);
    }
    cout << ans << endl;
    return 0;
}