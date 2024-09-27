#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int m;
    cin >> m;
    vector<int> ans;
    while(m > 0){
        int count = 0;
        int i = 1;
        while(i <= m) i *= 3, count++;
        m -= i / 3;
        ans.push_back(count - 1);
    }
    cout << ans.size() << "\n";
    for(int i = 0; i < (int)ans.size(); i++) cout << ans[i] << " \n"[i == (int)ans.size() - 1];
    return 0;
}
