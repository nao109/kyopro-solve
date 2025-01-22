#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n, m;
    cin >> n >> m;
    vector<bool> man(n, false);
    for(int i = 0; i < m; i++){
        int a;
        char b;
        cin >> a >> b;
        if(b == 'M'){
            if(!man[a - 1]) cout << "Yes\n";
            else cout << "No\n";
            man[a - 1] = true;
        }
        else cout << "No\n";
    }
    return 0;
}
