#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    string s, t;
    cin >> s >> t;
    int n = s.size();

    bool flag = false;
    for(int w = 1; w < n; w++){
        vector<string> strs;
        for(int i = 0; w * i < n; i++){
            if(n - w * i >= w) strs.push_back(s.substr(w * i, w));
            else strs.push_back(s.substr(w * i));
        }

        for(int c = 1; c <= w; c++){
            string check = "";
            for(auto str : strs){
                if(str.size() >= c){
                    check.push_back(str[c - 1]);
                }
            }
            if(check == t) flag = true;
        }
    }
    cout << (flag ? "Yes\n" : "No\n");
    return 0;
}
