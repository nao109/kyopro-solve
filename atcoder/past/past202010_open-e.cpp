#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;
    if(n <= 2){
        cout << "None\n";
        return 0;
    }
    string t = s;
    sort(t.begin(), t.end());
    do {
        string chk = t;
        if(chk != s){
            reverse(chk.begin(), chk.end());
            if(chk != s){
                cout << t << endl;
                return 0;
            }
        }
    } while(next_permutation(t.begin(), t.end()));
    
    cout << "None\n";
    return 0;
}
