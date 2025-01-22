#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    cin >> n;
    int state = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s == "sweet") state++;
        else state = 0;
        if(state == 2){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}
