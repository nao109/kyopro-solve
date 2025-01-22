#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, q;
    cin >> n >> q;
    map<int, set<int>> box_of_num;
    map<int, map<int, int>> box;
    for(int i = 0; i < q; ++i){
        int x, a;
        cin >> x >> a;
        if(x == 1){
            int b;
            cin >> b;
            if(box[b].count(a)) box[b][a]++;
            else box[b][a] = 1;
            box_of_num[a].insert(b);
        }
        else if(x == 2){
            for(auto [b, cnt] : box[a]){
                for(int k = 0; k < cnt; ++k){
                    cout << b << " ";
                }
            }
            cout << "\n";
        }
        else{
            for(int j : box_of_num[a]){
                cout << j << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}