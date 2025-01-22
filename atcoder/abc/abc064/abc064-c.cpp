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

    vector<int> cnt(9, 0);
    for(int i = 0; i < n; i++){
        if(a[i] >= 3200) cnt[8]++;
        else cnt[a[i] / 400] = 1;
    }

    int mi = 0, ma = 0;
    for(int i = 0; i < 8; i++){
        if(cnt[i] > 0) mi++, ma++;
    }
    if(cnt[8] > 0){
        mi = max(1, ma);
        ma += cnt[8];
    }
    cout << mi << " " << ma << endl;
    return 0;
}