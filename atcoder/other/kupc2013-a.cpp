#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
    int n, k;
    cin >> n >> k;
    vector<string> name(50);
    name[0] = "kogakubu10gokan";
    for(int i = 0; i < n; ++i){
        int year;
        cin >> year;
        cin >> name[year - 1];
    }

    for(int i = 1; i < 50; ++i){
        if(name[i] == "") name[i] = name[i - 1];
    }
    
    cout << name[k - 1] << endl;
    return 0;
}