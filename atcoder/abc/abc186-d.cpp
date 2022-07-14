#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  vector<ll> a(n);
  for(ll &i:a) cin >> i;
  sort(all(a),greater<ll>());
  ll ans=0,sum=0;
  for(int i=1; i<n; ++i) sum+=a[i];
  for(int i=0; i<n-1; ++i){
    ans+=(n-i-1)*a[i]-sum;
    sum-=a[i+1];
  }
  cout << ans << endl;
  return 0;
}