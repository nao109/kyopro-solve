#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    ll n;
    cin >> n;

    ll k = n - 1;
    string n5 = "";
    while(k / 5 > 0){
        n5.push_back('0' + k % 5);
        k /= 5;
    }
    n5.push_back('0' + k % 5);
    reverse(n5.begin(), n5.end());

    for(char i : n5){
        cout << "02468"[i - '0'];
    }
    cout << "\n";
    return 0;
}