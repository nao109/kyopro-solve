#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    vector<pair<int, int>> win_id(n);
    for(int i = 0; i < n; i++) win_id[i] = {0, i};

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(s[i][j] == 'o') win_id[i].fi--;
        }
    }

    sort(win_id.begin(), win_id.end());

    for(int i = 0; i < n; i++){
        cout << win_id[i].se + 1 << " \n"[i == n - 1];
    }
    return 0;
}