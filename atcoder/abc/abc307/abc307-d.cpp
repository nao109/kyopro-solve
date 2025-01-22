#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    string s;
    cin >> n >> s;

    string ans = "";
    int height = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == ')' && height > 0){
            while(ans.back() != '(') ans.pop_back();
            ans.pop_back();
            height--;
        }
        else{
            ans.push_back(s[i]);
            if(s[i] == '(') height++;
        }
    }

    cout << ans << endl;
    return 0;
}
