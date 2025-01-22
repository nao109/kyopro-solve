#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int h, w, si, sj;
    cin >> h >> w >> si >> sj;
    vector<string> c(h);
    for(int i = 0; i < h; i++) cin >> c[i];
    string x;
    cin >> x;

    si--, sj--;
    for(int i = 0; i < (int)x.size(); i++){
        if(x[i] == 'L' && sj > 0 && c[si][sj - 1] == '.') sj--;
        if(x[i] == 'R' && sj < w - 1 && c[si][sj + 1] == '.') sj++;
        if(x[i] == 'U' && si > 0 && c[si - 1][sj] == '.') si--;
        if(x[i] == 'D' && si < h - 1 && c[si + 1][sj] == '.') si++;
    }
    si++, sj++;
    cout << si << " " << sj << "\n";
    return 0;
}
