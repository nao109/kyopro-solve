#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    vector<bool> isblue(n, false);
    for(int i = 0; i < m; ++i){
        int a;
        cin >> a;
        isblue[a - 1] = true;
    }

    vector<int> white;
    int w = 0;
    for(int i = 0; i < n; i++){
        if(!isblue[i]) w++;
        else if(w > 0){
            white.push_back(w);
            w = 0;
        }
    }
    if(w > 0) white.push_back(w);
  
    int mi = n - m;
    for(int i : white) mi = min(mi, i);

    int ans = 0;
    for(int i : white) ans += (i + mi - 1) / mi;
    cout << ans << endl;
    return 0;
}