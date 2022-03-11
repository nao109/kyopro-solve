#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)

void check(){
  ll n; cin >> n;
  ll ans;
  if(n==3) ans=7;
  else if(n==1) ans=1;
  else{
    ans=pow(2,n)-1;
  }
  cout << ans << endl;
}

int main(){
  cout << fixed << setprecision(7);
  int t; cin >> t;
  rep(i,t) check();
  return 0;
}