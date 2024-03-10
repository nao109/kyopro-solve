#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> front(n + 1, -1), back(n + 1, -1);
    for(int i = 0; i < q; i++){
        int k;
        cin >> k;
        if(k == 1){
            int x, y;
            cin >> x >> y;
            front[y] = x;
            back[x] = y;
        }
        if(k == 2){
            int x, y;
            cin >> x >> y;
            front[y] = -1;
            back[x] = -1;
        }
        if(k == 3){
            int x;
            cin >> x;
            deque<int> ans;
            int pos = x;
            while(front[pos] != -1) pos = front[pos];
            while(1){
                ans.push_back(pos);
                if(back[pos] == -1) break;
                pos = back[pos];
            }

            // output
            cout << ans.size() << " ";
            while(!ans.empty()){
                cout << ans.front() << " ";
                ans.pop_front();
            }
            cout << "\n";
        }
    }
    return 0;
}