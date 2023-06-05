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

    int ans = 0;

    int right = 0;
    set<int> mem;
    for(int left = 0; left < n; left++){
        while(right < n && !mem.count(a[right])){
            mem.insert(a[right]);
            right++;
        }

        ans = max(ans, (int)mem.size());

        if(right == left) right++;
        else mem.erase(a[left]);
    }

    cout << ans << endl;
    return 0;
}