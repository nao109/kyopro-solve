#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s;
    cin >> s;
    int n = s.size();

    string ss = "";
    ss.push_back(s[0]);
    for(int i = 1; i < n; i++){
        if(s[i] != ss.back()) ss.push_back(s[i]);
    }

    for(int i = 1; i < (int)ss.size(); i++){
        if(ss[i] < ss[i - 1]){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}