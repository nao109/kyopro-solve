#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    string s;
    cin >> n >> s;

    string t = "";
    set<char> already;
    for(int i = n - 1; i >= 0; i--){
        if(!already.count(s[i])){
            t.push_back(s[i]);
            already.insert(s[i]);
        }
    }
    reverse(t.begin(), t.end());
    cout << t << endl;
    return 0;
}