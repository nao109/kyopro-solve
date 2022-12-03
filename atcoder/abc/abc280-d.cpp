#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll k;
  cin >> k;

  ll cnt=0;
  for(ll i=2; i*i<=k; ++i){
    if(k%i==0) cnt++;
  }
  if(cnt==0){
    cout << k << endl;
    return 0;
  }

  ll ans=-1, i=1;
  while(k>1){
    k/=gcd(k,i);
    if(k==1){
      ans=i;
      break;
    }
    i++;
  }
  
  cout << ans << endl;
  return 0;
}