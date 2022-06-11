#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const int mod=998244353;
int main(){
  vector<ll> a(3),sum(3,0);
  for(int i=0; i<3; ++i) cin >> a[i];
  for(int i=0; i<3; ++i){
    sum[i]=((a[i]*(a[i]+1))/2)%mod;
  }
  ll ans=(((sum[0]*sum[1])%mod)*sum[2])%mod;
  cout << ans << endl;
  return 0;
}