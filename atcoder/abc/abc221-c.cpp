#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(), a.end()
int main(){
    string s;
    cin >> s;
    int n = s.size();

    int ma = 0;
    
    for(int i = 1; i < n; ++i){
        if(s[i]!='0'){
            int a = stoi(s.substr(0, i));
            int b = stoi(s.substr(i));
            ma = max(a * b, ma);
        }
    }

    cout << ma << endl;
    return 0;
}