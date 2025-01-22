#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> pos(n + 1);
    for(int i = 0; i < n; i++){
        a[i] = i + 1;
        pos[i + 1] = i;
    }

    while(q--){
        int x;
        cin >> x;
        if(pos[x] < n - 1){
            swap(a[pos[x]], a[(pos[x] + 1) % n]);
            pos[a[pos[x]]]--;
            pos[x]++;
        }
        else{
            swap(a[pos[x]], a[pos[x] - 1]);
            pos[a[pos[x]]]++;
            pos[x]--;
        }
    }

    
    for(int i = 0; i < n; i++){
        cout << a[i] << " \n"[i == n - 1];
    }
    return 0;
}