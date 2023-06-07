#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ave = 0;
    for(int i = 1; i < n; i++) ave += a[i] - a[i - 1];
    cout << fixed << setprecision(5) << (long double)ave / (n - 1) << endl;
    return 0;
}