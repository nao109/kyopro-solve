#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int a[3];
    int even = 0;
    for(int i = 0; i < 3; i++){
        cin >> a[i];
        if(a[i] % 2 == 0) even++;
    }
    sort(a, a + 3);

    int cnt = 0;
    if(even == 1){
        for(int i = 0; i < 3; i++){
            if(a[i] % 2 == 1) a[i]++;
        }
        cnt++;
    }
    else if(even == 2){
        for(int i = 0; i < 3; i++){
            if(a[i] % 2 == 0) a[i]++;
        }
        cnt++;
    }
    
    for(int i = 0; i < 3; i++){
        cnt += (a[2] - a[i]) / 2;
    }

    cout << cnt << endl;
    return 0;
}