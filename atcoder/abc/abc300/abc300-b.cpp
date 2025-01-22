#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int h, w;
    cin >> h >> w;
    vector<string> a(h), b(h);
    for(int i = 0; i < h; ++i) cin >> a[i];
    for(int i = 0; i < h; ++i) cin >> b[i];

    for(int s = 0; s < h; ++s){
        for(int t = 0; t < w; ++t){
            vector<string> c = a;
            vector<string> d = a, e = a;

            for(int i = 0; i < h; ++i){
                for(int j = 0; j < w; ++j){
                    d[(i + s) % h][j] = c[i][j];
                }
            }

            for(int i = 0; i < h; ++i){
                for(int j = 0; j < w; ++j){
                    e[i][(j + t) % w] = d[i][j];
                }
            }

            bool flag = true;
            for(int i = 0; i < h; ++i){
                if(e[i] != b[i]) flag = false;
            }
                        
            if(flag){
                cout << "Yes\n";
                return 0;
            }
        }
    }

    cout << "No\n";
    return 0;
}