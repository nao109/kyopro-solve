#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string n;
    int k;
    cin >> n >> k;

    if(n == "0"){
        cout << 0 << endl;
        return 0;
    }

    for(int i = 0; i < k; i++){
        reverse(n.begin(), n.end());
        ll n10 = 0, k8 = 1;
        for(char i : n){
            n10 += (i - '0') * k8;
            k8 *= 8;
        }

        string n9 = "";
        while(n10 > 0){
            n9.push_back('0' + n10 % 9);
            n10 /= 9;
        }
        reverse(n9.begin(), n9.end());
        
        for(char &i : n9){
            if(i == '8') i = '5';
        }
        n = n9;
    }
    cout << n << endl;
    return 0;
}