#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  bool ans=false;
  rep(i,9)rep(j,9){
    if((i+1)*(j+1)==n){
      ans=true; break;
    }
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";

  return 0;
}