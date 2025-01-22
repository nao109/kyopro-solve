#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
ll collatz(ll a){
  if(a%2==0) return a/2;
  else return a*3+1;
}
int main(){
  cout << fixed << setprecision(7);
  ll s; cin >> s;
  vector<ll> a(1000000);
  a[0]=s;
  ll ans=0;
  if(s<=2) ans=0;
  else{
    rep(i,1000000){
      if(a[i]==4){
        ans=i; break;
      }
      a[i+1]=collatz(a[i]);
    }
  }
  cout << ans+4 << endl;
  return 0;
}