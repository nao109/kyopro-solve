#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> schedule(n);
    for(int i = 0; i < n; i++){
        int d, s, t;
        cin >> d >> s >> t;
        schedule[i].fi = d * 24 + s;
        schedule[i].se = d * 24 + t;
    }

    sort(schedule.begin(), schedule.end());

    for(int i = 0; i < n - 1; i++){
        if(schedule[i].se > schedule[i + 1].fi){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}