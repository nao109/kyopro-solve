#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for(int i = 0; i < m; i++) cin >> a[i];
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    vector<int> point(n, 0);
    for(int i = 0; i < n; i++){
        point[i] += i + 1;
        for(int j = 0; j < m; j++){
            point[i] += (s[i][j] == 'o' ? a[j] : 0);
        }
    }

    for(int i = 0; i < n; i++){
        int now_p = point[i];
        int max_p = 0;
        for(int j = 0; j < n; j++){
            if(j == i) continue;
            max_p = max(point[j], max_p);
        }
        
        if(now_p > max_p){
            cout << 0 << endl;
            continue;
        }

        priority_queue<int> candidates;
        for(int j = 0; j < m; j++){
            if(s[i][j] == 'x') candidates.push(a[j]);
        }

        int ans = 0;
        while(!candidates.empty()){
            now_p += candidates.top();
            candidates.pop();
            ans++;
            if(now_p > max_p){
                cout << ans << endl;
                break;
            }
        }
    }
    return 0;
}