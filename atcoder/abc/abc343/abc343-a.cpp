#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int a, b;
    cin >> a >> b;
    for(int i = 0; i < 10; i++){
        if(a + b != i){
            cout << i << "\n";
            return 0;
        }
    }
    return 0;
}