#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,m,ma=0;
  cin >> n >> m;
  vector<vector<ll>> a(n,vector<ll>(m));
  for(ll i=0; i<n; ++i)for(ll j=0; j<m; ++j) cin >> a[i][j];

  for(ll i=0; i<m; ++i){
    for(ll j=i+1; j<m; ++j){
      ll sum=0;
      for(ll k=0; k<n; ++k){
        sum+=max(a[k][i],a[k][j]);
      }
      ma=max(sum,ma);
    }
  }
  cout << ma << "\n";
  return 0;
}