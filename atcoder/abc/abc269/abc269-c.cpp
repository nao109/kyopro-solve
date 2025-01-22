#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  if(n==0){
    cout << 0 << "\n";
    return 0;
  }
  vector<ll> bit;
  while(n>0){
    bit.push_back(n%2==1);
    n=n>>1;
  }
  ll bs=bit.size();
  vector<ll> a;
  for(ll i=0; i<bs; ++i){
    if(bit[i]) a.push_back(i);
  }
  ll as=a.size();
  
  for(ll &i:a) cerr << i << endl;
  
  vector<ll> ans(1ll<<as);
  
  for(ll i=0; i<(1ll<<as); ++i){
    for(ll j=0; j<as; ++j){
      if(i&1<<j){
        ans[i]+=(1ll<<a[j]);
      }
    }
  }
  sort(all(ans));
  for(ll &i:ans) cout << i << endl;
  return 0;
}