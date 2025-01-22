#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  string s;
  cin >> n >> s;
  s='0'+s;
  
  for(int i=1; i<=n-1; ++i){
    int ma=0;
    for(int k=1; k<=n-i; ++k){
      if(s[k]!=s[k+i]){
        ma=k;
      }
      else break;
    }
    cout << ma << endl;
  }
  return 0;
}