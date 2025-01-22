#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> r(n);
  rep(i,n) cin >> r[i];
  double ans=0;
  sort(r.begin(),r.end());
  if(n%2==0){
    rep(i,n){
      if(i%2==0) ans-=r[i]*r[i];
      else ans+=r[i]*r[i];
    }
  }
  else{
    rep(i,n){
      if(i%2==0) ans+=r[i]*r[i];
      else ans-=r[i]*r[i];
    }
  }
  cout << ans*acos(-1) << endl;
  return 0;
}