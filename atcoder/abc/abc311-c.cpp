#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        a[i]--;
    }

    deque<int> d;
    vector<bool> seen(n, false);
    int cur = 0;
    while(1){
        if(seen[cur]){
            while(d[0] != cur) d.pop_front();
            break;
        }
        d.push_back(cur);
        seen[cur] = true;
        cur = a[cur];
    }

    cout << (int)d.size() << endl;
    while(!d.empty()){
        cout << d.front() + 1 << " ";
        d.pop_front();
    }
    cout << endl;
    return 0;
}