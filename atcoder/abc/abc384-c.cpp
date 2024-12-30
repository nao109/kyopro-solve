#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    vector<int> a(5);
    for(int i = 0; i < 5; i++) cin >> a[i];
    vector<set<string>> table(14000);
    for(int i = 0; i < (1 << 5); i++){
        string name = "";
        int score = 0;
        for(int bit = 0; bit < 5; bit++){
            if(i & (1 << bit)){
                name.push_back('A' + bit);
                score += a[bit];
            }
        }
        table[score].insert(name);
    }

    for(int i = 13999; i > 0; i--){
        for(string t : table[i]){
            cout << t << "\n";
        }
    }
    return 0;
}
