#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, k;
    string s;
    cin >> n >> k >> s;

    string t = "";
    for(int i = 0; i < n; ++i){
        if(s[i] == 'o' && k > 0){
            t.push_back('o');
            k--;
        }
        else t.push_back('x');
    }

    cout << t << endl;
    return 0;
}