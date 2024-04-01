#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> vote(n);
    for(int i = 0; i < m; i++){
        int b;
        cin >> b;
        for(int j = 0; j < n; j++){
            if(b >= a[j]){
                vote[j]++;
                break;
            }
        }
    }

    int ans = 0, max_vote = 0;
    for(int i = 0; i < n; i++){
        if(max_vote < vote[i]) max_vote = vote[i], ans = i + 1;
    }
    cout << ans << "\n";
    return 0;
}
