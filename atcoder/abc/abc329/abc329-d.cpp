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

    int max_count = 0, max_id = 1;
    map<int, int> count;
    for(int i = 0; i < m; i++){
        count[a[i]]++;
        if(count[a[i]] > max_count){
            max_count = count[a[i]];
            max_id = a[i];
        }
        if(count[a[i]] == max_count){
            if(a[i] < max_id) max_id = a[i];
        }
        cout << max_id << endl;
    }
    return 0;
}