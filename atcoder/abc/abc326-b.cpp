#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    for(int i = n; i < 1000; i++){
        if((i / 100) * (i / 10 % 10) == i % 10){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}