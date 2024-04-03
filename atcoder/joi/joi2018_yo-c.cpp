#include "bits/stdc++.h"
using namespace std;
using ll = long long;
#define fi first
#define se second

const int INF = 1e9;
template<typename T> void chmin(T& a, const T& b){ if(a > b) a = b; }
template<typename T> void chmax(T& a, const T& b){ if(a < b) a = b; }

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> a[i][j];
        }
    }

    int ans = INF;
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
        	int sum = 0;
        	for(int n = 0; n < h; n++){
        	    for(int m = 0; m < w; m++){
        	        sum += a[n][m] * min(abs(i - n), abs(j - m));
        	    }
        	}
        	chmin(ans, sum);
        }
    }
    cout << ans << "\n";
    return 0;
}
