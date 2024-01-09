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
                for(int j = 0; j < n; j++){
                    if(isupper(s[j])) s[j] += 'a' - 'A';
                }
            }
            else{
                for(int j = 0; j < n; j++){
                    if(islower(s[j])) s[j] += 'A' - 'a';
                }
            }
        }
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