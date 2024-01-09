#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
using P = pair<int, int>;

int main(){
    int n, q;
    string s;
    cin >> n >> s >> q;

    queue<pair<int, char>> xc;
    bool all_lower = false, all_upper = false;

    for(int i = 0; i < q; i++){
        int t, x;
        char c;
        cin >> t >> x >> c;

        if(t == 1) xc.emplace(x - 1, c);
        else{
            while(!xc.empty()){
                tie(x, c) = xc.front();
                xc.pop();
                s[x] = c;
            }

            if(t == 2){
                all_lower = true;
                all_upper = false;
            }
            else{
                all_lower = false;
                all_upper = true;
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(all_upper && islower(s[i])) s[i] += 'A' - 'a';
        if(all_lower && isupper(s[i])) s[i] += 'a' - 'A';
    }

    while(!xc.empty()){
        int x, c;
        tie(x, c) = xc.front();
        xc.pop();
        s[x] = c;
    }

    cout << s << endl;
    return 0;
}