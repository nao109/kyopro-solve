#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second

int d2(int ax, int ay, int bx, int by){
    return (ax - bx) * (ax - bx) + (ay - by) * (ay - by);
}

int main(){
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    if(d2(ax, ay, bx, by) + d2(ax, ay, cx, cy) == d2(bx, by, cx, cy)) cout << "Yes\n";
    else if(d2(bx, by, ax, ay) + d2(bx, by, cx, cy) == d2(ax, ay, cx, cy)) cout << "Yes\n";
    else if(d2(cx, cy, ax, ay) + d2(cx, cy, bx, by) == d2(ax, ay, bx, by)) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
