#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> s(n);
        for(int i = 0; i < n; i++) cin >> s[i];

        sort(s.begin() + 1, s.end() - 1);

        if(s[n - 1] <= s[0] * 2){
            cout << "2\n";
            continue;
        }

        int end = n - 1;
        int ans = 1;
        while(true){
            int id = distance(s.begin(), lower_bound(s.begin() + 1, s.end() - 1, (s[end] + 1) / 2));
            if(id >= end){
                ans = -1;
                break;
            }

            if(s[id] <= s[0] * 2){
                ans += 2;
                break;
            }

            ans++;
            end = id;
        }
        cout << ans << "\n";
    }
    return 0;
}
