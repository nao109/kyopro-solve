#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    ll q;
    cin >> q;
    vector<ll> snake;
    ll head_id = 0;
    ll length = 0;
    while(q--){
        ll t;
        cin >> t;
        if(t == 1){
            ll l;
            cin >> l;
            if(snake.size() == 0) snake.push_back(0);
            else snake.push_back(snake.back() + length);
            length = l;
        }
        if(t == 2){
            head_id++;
        }
        if(t == 3){
            ll k;
            cin >> k;
            if (head_id == 0) cout << snake[k - 1] << "\n";
            else cout << snake[head_id + k - 1] - snake[head_id] << "\n";
        }
    }
    return 0;
}
