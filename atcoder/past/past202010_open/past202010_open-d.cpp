#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    string s;
    cin >> n >> s;

    vector<bool> a(n, false);
    for(int i = 0; i < n; i++) a[i] = (s[i] == '#');

    int x = 0, y = 0;
    while(1){
        int l = 0, r = 0;
        for(int j = 0; j < n; j++){
            if(j > 0 && a[j] && !a[j - 1]) l++;
            if(j < n - 1 && a[j] && !a[j + 1]) r++;
        }

        if(l == 0 && r == 0) break;
        else if(l > r){
            for(int j = 0; j < n; j++){
                if(j > 0 && a[j]) a[j - 1] = true;
            }
            x++;
        }
        else{
            for(int j = n - 1; j >= 0; j--){
                if(j < n - 1 && a[j]) a[j + 1] = true;
            }
            y++;
        }

        bool flag = true;
        for(int i = 0; i < n; i++) flag &= !a[i];
        if(flag) break;
    }
    cout << x << " " << y << "\n";
    return 0;
}
