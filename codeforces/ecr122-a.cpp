#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
bool solve(){
  int t; cin >> t;
  if(t%7==0) cout << t << endl;
  else{
    t=t/10;
    rep(i,10){
      if((t*10+i)%7==0){cout << t*10+i << endl; break;}
    }
  }
  return 0;
}
int main(){
  cout << fixed << setprecision(15);
  int n; cin >> n;
  rep(i,n) solve();
  return 0;
}