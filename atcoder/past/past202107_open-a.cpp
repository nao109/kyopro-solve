#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string s;
    cin >> s;
    int odd_sum = 0, even_sum = 0;
    for(int i = 0; i < 14; i++){
        (i % 2 == 0 ? odd_sum : even_sum) += (s[i] - '0');
    }
    int check = (odd_sum * 3 + even_sum) % 10;
    cout << (check == s.back() - '0' ? "Yes\n" : "No\n");
    return 0;
}