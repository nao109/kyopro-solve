#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int n;
    string s;
    cin >> n >> s;

    string memo = "";
    int height = 0;
    for(int i = 0; i < n; i++){
        if(height == 0){
            if(s[i] == '('){
                memo.push_back(s[i]);
                height++;
            }
            else cout << s[i];
        }
        else{
            memo.push_back(s[i]);
            if(s[i] == '(') height++;
            else if(s[i] == ')'){
                height--;
                if(height == 0) memo = "";
            }
        }
    }
    cout << memo << endl;
    return 0;
}
