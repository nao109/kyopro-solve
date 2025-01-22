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

    vector<int> score(n, 0);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int b;
            cin >> b;
            if(b == a[i]) score[j]++;
            else score[a[i] - 1]++;
        }
    }
    
    for(int i = 0; i < n; i++) cout << score[i] << endl;
    return 0;
}