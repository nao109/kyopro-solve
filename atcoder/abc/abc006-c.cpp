#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n >> m;
  for(int i=0; i<=n; ++i){
    for(int j=0; j<=n; ++j){
      if(n-i-j<0) continue;
      else if(2*i+3*j+4*(n-i-j)==m){
        cout << i << " " << j << " " << n-i-j << endl;
        return 0;
      }
    }
  }
  cout << "-1 -1 -1" << endl;
  return 0;
}