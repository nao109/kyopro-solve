#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n;
    cin >> n;

    int ng = -1;
    int ok = n;

    while(abs(ok - ng) > 1){
        int mid = (ok + ng) / 2;
        cout << "? " << mid << endl;
        fflush(stdout);
        int check;
        cin >> check;
        if(check) ok = mid;
        else ng = mid;
    }

    cout << "! " << ok - 1 << endl;
    fflush(stdout);
    return 0;
}