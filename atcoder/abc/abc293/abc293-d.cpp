#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#include <atcoder/dsu>
using namespace atcoder;
#define fi first
#define se second
int main(){
    int n, m;
    cin >> n >> m;
    dsu d(n * 2);
    int circle = 0, line = n;
    for(int i = 0; i < n; i++) d.merge(i * 2, i * 2 + 1);
    for(int i = 0; i < m; i++){
        int A, C;
        char B, D;
        cin >> A >> B >> C >> D;
        A--, C--;
        A *= 2, C *= 2;
        if(B == 'R') A++;
        if(D == 'R') C++;
        
        if(d.same(A, C)) circle++;
        line--;
        d.merge(A, C);
    }
    cout << circle << " " << line << endl;
    return 0;
}