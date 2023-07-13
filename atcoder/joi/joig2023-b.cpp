#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<vector<int>> b(n);
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        b[0].push_back(a);
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < n - i; j++){
            b[i].push_back(abs(b[i - 1][j] - b[i - 1][j + 1]));
        }
    }
    
    cout << b[n - 1][0] << endl;
    return 0;
}