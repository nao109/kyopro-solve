#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;

    set<int> div;
    for(int i = 1; i <= 9; i++){
        if(n % i == 0) div.insert(i);
    }

    string s = "";

    for(int i = 0; i <= n; i++){
        bool flag = false;
        for(int j : div){
            if(i % (n / j) == 0){
                flag = true;
                s.push_back('0' + j);
                break;
            }
        }
        if(!flag) s.push_back('-');
    }

    cout << s << endl;
    return 0;
}