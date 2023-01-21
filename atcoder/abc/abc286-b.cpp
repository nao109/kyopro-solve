#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(), a.end()
int main(){
  	int n;
    string s;
    cin >> n >> s;

    string ans="";
    for(int i=0; i<n; ++i){
        ans+=s[i];
        if(s[i]=='n' && s[i+1]=='a') ans+='y';
    }
    cout << ans << endl;
    return 0;
}