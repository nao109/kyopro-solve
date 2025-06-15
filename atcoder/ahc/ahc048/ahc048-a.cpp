#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

struct CMY {
    double C, M, Y;
};

int main(){
    int N, K, H, T, D;
    cin >> N >> K >> H >> T >> D;
    vector<CMY> own(K), target(H);
    for(int i = 0; i < K; i++) cin >> own[i].C >> own[i].M >> own[i].Y;
    for(int i = 0; i < H; i++) cin >> target[i].C >> target[i].M >> target[i].Y;

    vector v(N, vector<bool>(N - 1, true));
    vector h(N - 1, vector<bool>(N, true));

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N - 1; j++){
            cout << v[i][j] << " \n"[j == N - 2];
        }
    }
    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < N; j++){
            cout << h[i][j] << " \n"[j == N - 2];
        }
    }
    for(int i = 0; i < H; i++){
        cout << "1 0 0 1\n";
        cout << "2 0 0\n";
    }
    return 0;
}
