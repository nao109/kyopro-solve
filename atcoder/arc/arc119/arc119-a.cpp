#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const ll INF = 1000000000000000000;
int main(){
  ll n;
  cin >> n;
  ll k2=1;
  ll ans=INF;
  for(int i=0; i<60; ++i){
    ll chk=i;
    chk+=(n/k2)+(n%k2);
    k2*=2;
    ans=min(chk,ans);
  }
  cout << ans << endl;
  return 0;
}