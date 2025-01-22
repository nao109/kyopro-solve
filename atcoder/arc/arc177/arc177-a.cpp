#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

bool dfs(int A, int B, int C, int D, int E, int F, vector<int> &X, int N, int i){
    if(i == N) return true;

    for(int a = 0; a <= A; a++){
        for(int b = 0; b <= B; b++){
            for(int c = 0; c <= C; c++){
                for(int d = 0; d <= D; d++){
                    for(int e = 0; e <= E; e++){
                        for(int f = 0; f <= F; f++){
                            if(a + 5 * b + 10 * c + 50 * d + 100 * e + 500 * f == X[i]){
                                bool res = dfs(A - a, B - b, C - c, D - d, E - e, F - f, X, N, i + 1);
                                if(res) return res;
                            }
                        }
                    }
                }
            }
        }
    }
    return false;
}

int main(){ 
    int a, b, c, d, e, f, n;
    cin >> a >> b >> c >> d >> e >> f >> n;
    vector<int> x(n);
    for(int i = 0; i < n; i++) cin >> x[i];

    bool flag = dfs(a, b, c, d, e, f, x, n, 0);

    cout << (flag ? "Yes\n" : "No\n");
    return 0;
}
