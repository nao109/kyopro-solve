#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < 7; j++){
            int a;
            cin >> a;
            sum += a;
        }
        cout << sum << endl;
    }
    return 0;
}