#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    deque<char> rotate;
    for(int j = 0; j < n; j++) rotate.push_back(a[0][j]);
    for(int i = 1; i < n; i++) rotate.push_back(a[i][n - 1]);
    for(int j = n - 2; j >= 0; j--) rotate.push_back(a[n - 1][j]);
    for(int i = n - 2; i > 0; i--) rotate.push_back(a[i][0]);
    rotate.push_front(rotate.back());
    rotate.pop_back();

    for(int j = 0; j < n; j++){
        a[0][j] = rotate.front();
        rotate.pop_front();
    }
    for(int i = 1; i < n; i++){
        a[i][n - 1] = rotate.front();
        rotate.pop_front();
    }
    for(int j = n - 2; j >= 0; j--){
        a[n - 1][j] = rotate.front();
        rotate.pop_front();
    }
    for(int i = n - 2; i > 0; i--){
        a[i][0] = rotate.front();
        rotate.pop_front();
    }

    for(int i = 0; i < n; i++) cout << a[i] << endl;
    return 0;
}