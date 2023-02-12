#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    string n;
    cin >> n;
    int ns = n.size();
    int odd = 0, even = 0;
    for(int i = 0; i < ns; ++i){
        if(i % 2 == 0) even += n[ns - 1 - i] - '0';
        else odd += n[ns - 1 - i] - '0';
    }
    cout << odd << " " << even << endl;
    return 0;
}