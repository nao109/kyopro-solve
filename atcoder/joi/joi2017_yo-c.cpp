#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, m, d;
    cin >> n >> m >> d;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    vector<int> choice;

    // 横方向に見た連続空きマス
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            if(s[i][j] == '.') sum++;
            else if(sum > 0){
                choice.push_back(sum);
                sum = 0;
            }
        }
        if(sum > 0) choice.push_back(sum);
    }

    // 縦方向に見た連続空きマス
    for(int j = 0; j < m; j++){
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(s[i][j] == '.') sum++;
            else if(sum > 0){
                choice.push_back(sum);
                sum = 0;
            }
        }
        if(sum > 0) choice.push_back(sum);
    }

    // 数え上げ
    int ans = 0;
    for(int i : choice) ans += max(i - d + 1, 0);
    cout << ans << "\n";
    return 0;
}
