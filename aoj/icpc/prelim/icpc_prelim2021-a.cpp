#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

const int INF = 1e9;

int main(){
    while(1){
        vector<int> a(4);
        for(int i = 0; i < 4; i++) cin >> a[i];
        sort(a.begin(), a.end());

        if(a[3] == 0) break;

        while(1){
            sort(a.begin(), a.end());

            int id = 0;
            for(int i = 0; i < 4; i++){
                if(a[i] == 0) id++;
            }

            if(id == 3){
                cout << a[3] << "\n";
                break;
            }

            for(int i = 0; i < 4; i++){
                if(i != id) a[i] = max(a[i] - a[id], 0);
            }
        }
    }
    return 0;
}
