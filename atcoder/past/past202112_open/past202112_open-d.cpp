#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<ll> math(n), eng(n);
    for(int i = 0; i < n; ++i) cin >> math[i];
    for(int i = 0; i < n; ++i) cin >> eng[i];
    
    vector<tuple<ll, ll, ll>> student(n);
    for(int i = 0; i < n; ++i){
        get<0>(student[i]) = -(math[i] + eng[i]);
        get<1>(student[i]) = -math[i];
        get<2>(student[i]) = i + 1;
    }
    sort(student.begin(), student.end());
    for(int i = 0; i < n; ++i) cout << get<2>(student[i]) << endl;
    return 0;
}