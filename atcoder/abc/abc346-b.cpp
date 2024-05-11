#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string piano = "";
    for(int i = 0; i < 20; i++) piano += "wbwbwwbwbwbw";

    int w, b;
    cin >> w >> b;
    for(int i = 0; i < 240; i++){
        int cnt_w = 0, cnt_b = 0;
        for(int j = i + 1; j < min(i + 1 + w + b, 240); j++){
            if(piano[j] == 'w') cnt_w++;
            else cnt_b++;
        }
        if(cnt_w == w && cnt_b == b){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}
