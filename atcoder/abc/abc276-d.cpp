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
  int g=a[0];
  for(int i=1; i<n; ++i) g=gcd(g, a[i]);
  for(ll &i:a) i/=g;

  int ans=0,cnt=0;

  for(ll &i:a){
    while(i%2==0){
      i/=2;
      ans++;
    }
    while(i%3==0){
      i/=3;
      ans++;
    }
    if(i==1) cnt++;
  }
  
  if(cnt<n) ans=-1;
  cout << ans << endl;
  return 0;
}