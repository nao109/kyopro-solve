#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(void){
  ll n,k,x;
  cin >> n >> k >> x;
  vector<ll> a(n);
  for(ll &i:a) cin >> i;
  sort(all(a),greater<ll>());
  
  for(int i=0; i<n; ++i){
    if(k*x<=a[i]){
      a[i]-=k*x;
      k=0;
    }
    else if(x<=a[i]){
      k-=a[i]/x;
      a[i]%=x;
    }
  }

  sort(all(a),greater<int>());
  for(int i=0; i<min(k,n); ++i) a[i]-=x;
  
  int ans=0;
  for(int i=0; i<n; ++i) ans+=max(a[i],0ll);
  cout << ans << endl;
  return 0;
}