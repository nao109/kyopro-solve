#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

const int INF = 1e9;

int main(){
    while(1){
        int n;
        cin >> n;
        if(n == 0) break;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        int diff = INF;
        int id = -1;
        for(int i = 0; i < n; i++){
            if(abs(a[i] - 2023) < diff){
                diff = abs(a[i] - 2023);
                id = i + 1;
            }
        }
        cout << id << "\n";
    }
    return 0;
}
