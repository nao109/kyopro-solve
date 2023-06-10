#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    char p, q;
    cin >> p >> q;
    int dist[7] = {0, 3, 4, 8, 9, 14, 23};
    cout << abs(dist[p - 'A'] - dist[q - 'A']) << endl;
    return 0;
}