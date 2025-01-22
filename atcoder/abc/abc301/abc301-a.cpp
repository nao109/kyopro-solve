#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;
    int t = 0, a = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'T') t++;
        else if(s[i] == 'A') a++;
        if(n % 2 == 0){
            if(t == n / 2){
                cout << "T\n";
                return 0;
            }
            else if(a == n / 2){
                cout << "A\n";
                return 0;
            }
        }
    }
    cout << (t > a ? "T\n" : "A\n");
    return 0;
}