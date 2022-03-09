#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> h(n); rep(i,n) cin >> h[i];
  bool ch=true;
  rep(i,n-1){
    if(h[i]-h[i+1]>1){
      ch=false; break;
    }
    else if(h[i]-h[i+1]==1) --h[i];
  }
  if(ch){
    rep(i,n-1){
      if(h[i]-h[i+1]<=0) continue;
      else if(h[i]-h[i+1]>=1){
        ch=false; break;
      }
    }
  }
  if(ch) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}