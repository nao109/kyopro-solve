#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int main(){
    int a_sum = 0, b_sum = 0;
    for(int i = 0; i < 9; i++){
        int a;
        cin >> a;
        a_sum += a;
    }
    for(int i = 0; i < 8; i++){
        int b;
        cin >> b;
        b_sum += b;
    }
    cout << a_sum - b_sum + 1 << "\n";
    return 0;
}
