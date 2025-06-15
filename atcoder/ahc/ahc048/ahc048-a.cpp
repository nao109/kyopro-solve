#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

// 色
struct CMY {
    double C, M, Y;
};

// 誤差
double CMYError(CMY a, CMY b){
    return (a.C - b.C) * (a.C - b.C) + (a.M - b.M) * (a.M - b.M) + (a.Y - b.Y) * (a.Y - b.Y);
}

int main(){
    // 入力
    int N, K, H, T, D;
    cin >> N >> K >> H >> T >> D;
    vector<CMY> own(K), target(H);
    for(int i = 0; i < K; i++) cin >> own[i].C >> own[i].M >> own[i].Y;
    for(int i = 0; i < H; i++) cin >> target[i].C >> target[i].M >> target[i].Y;

    // しきり
    vector v(N, vector<bool>(N - 1, true));
    vector h(N - 1, vector<bool>(N, true));

    // しきりの出力
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

    // 操作
    vector<int> made(H);
    for(int i = 0; i < H; i++){
        int max_error = 2;
        for(int j = 0; j < K; j++){
            if(CMYError(own[j], target[i]) < max_error){
                made[i] = j;
                max_error = CMYError(own[j], target[i]);
            }
        }
    }

    // 操作の出力
    for(int i = 0; i < H; i++){
        cout << "1 0 0 " << made[i] << "\n";
        cout << "2 0 0\n";
    }
    return 0;
}
