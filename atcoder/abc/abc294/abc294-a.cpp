#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x % 2 == 0) a.push_back(x);
    }

    for(int i = 0; i < (int)a.size(); ++i){
        cout << a[i] << " \n"[i == (int)a.size() - 1];
    }
    return 0;
}