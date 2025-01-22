#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  int n; cin >> n;
  bool ans=false;
  rep(i,26){
    rep(j,15){
      if(4*i+7*j==n){
        ans=true; break;
      }
    }
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}