#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

vector<vector<char>> dfs(vector<vector<char>> &carpet){
    int sz = carpet.size();
    vector<vector<char>> new_carpet(sz * 3, vector<char>(sz * 3));
    for(int i = 0; i < sz * 3; i++){
        for(int j = 0; j < sz * 3; j++){
            new_carpet[i][j] = carpet[i % sz][j % sz];
        }
    }
    for(int i = sz; i < sz * 2; i++){
        for(int j = sz; j < sz * 2; j++){
            new_carpet[i][j] = '.';
        }
    }
    return new_carpet;
}

int main(){
    int n;
    cin >> n;

    int k3 = 1;
    for(int i = 0; i < n; i++) k3 *= 3;

    vector<vector<char>> carpet = {{'#'}};
    for(int i = 0; i < n; i++) carpet = dfs(carpet);

    for(auto i : carpet){
        for(char j : i) cout << j;
        cout << "\n";
    }
    return 0;
}
