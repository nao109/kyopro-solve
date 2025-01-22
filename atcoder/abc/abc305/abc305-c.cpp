#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int h, w;
    cin >> h >> w;
    vector<int> cnt_y(w, 0), cnt_x(h, 0);
    for(int i = 0; i < h; i++){
        string s;
        cin >> s;
        for(int j = 0; j < w; j++){
            if(s[j] == '#'){
                cnt_x[i]++;
                cnt_y[j]++;
            }
        }
    }

    int max_x = 0, max_y = 0;
    for(int i : cnt_y) max_y = max(max_y, i);
    for(int i : cnt_x) max_x = max(max_x, i);
    
    int x = 0, y = 0;
    for(int i = 0; i < h; i++){
        if(cnt_x[i] > 0 && cnt_x[i] < max_x) x = i + 1;
    }
    for(int i = 0; i < w; i++){
        if(cnt_y[i] > 0 && cnt_y[i] < max_y) y = i + 1;
    }
    cout << x << " " << y << endl;
    return 0;
}