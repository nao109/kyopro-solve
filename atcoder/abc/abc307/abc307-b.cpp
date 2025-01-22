#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    bool flag = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            string ij = s[i] + s[j];
            int ijs = ij.size();
            bool palindrome = true;
            for(int k = 0; k < ijs / 2; k++){
                if(ij[k] != ij[ijs - 1 - k]) palindrome = false;
            }
            flag |= palindrome;
            if(palindrome) cerr << i << " " << j << endl;
        }
    }
    cout << (flag ? "Yes\n" : "No\n");
    return 0;
}