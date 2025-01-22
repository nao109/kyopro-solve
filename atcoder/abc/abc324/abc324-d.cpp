#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;
    map<int, int> cnt;
    for(int i = 0; i < n; i++) cnt[s[i] - '0']++;

    if(cnt[1] == 0 && cnt[4] == 0 && cnt[5] == 0 && cnt[6] == 0 && cnt[9] == 0 && cnt[0] == 0){
        cout << 0 << endl;
        return 0;
    }
    
    map<string, int> square;
    for(ll i = 0; i * i <= 10000000000000; i++){
        string t = to_string(i * i);
        sort(t.begin(), t.end());
        square[t]++;
    }
    
    sort(s.begin(), s.end());
    int ans = square[s];
    while(s[0] == '0'){
        s = s.substr(1);
        ans += square[s];
    }
    cout << ans << endl;
    return 0;
}