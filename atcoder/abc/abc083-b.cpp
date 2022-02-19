#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
ll sum(ll i){
  int ch=0;
  while(i>0){
    ch+=i%10; i/=10;
  }
  return ch;
}
int main(){
  cout << fixed << setprecision(7);
  ll n,a,b; cin >> n >> a >> b;
  ll ans=0;
  rep(i,n){
    if(a<=sum(i+1)&&sum(i+1)<=b) ans+=i+1;
  }
  cout << ans << endl;
  return 0;
}