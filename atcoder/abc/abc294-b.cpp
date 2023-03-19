#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int h, w;
    cin >> h >> w;

    vector<string> s(h);
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            int a;
            cin >> a;
            if(a == 0) s[i].push_back('.');
            else s[i].push_back(char('A' + a - 1));
        }
    }
    
    for(int i = 0; i < h; ++i){
        cout << s[i] << endl;
    }
    return 0;
}