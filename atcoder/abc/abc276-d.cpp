#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  vector<ll> num2, num3;
  ll d2=1, d3=1;
  for(int i=1; i<31; ++i){
    num2.push_back(d2), num3.push_back(d3);
    d2*=2, d3*=3;
  }
  
  ll n;
  cin >> n;
  vector<ll> a(n);
  for(ll &i:a) cin >> i;
  int g=a[0];
  for(int i=1; i<n; ++i) g=gcd(g, a[i]);
  for(ll &i:a) i/=g;

  int ans=0,div=0;

  for(ll &i:a){
    int ma2=0, ma3=0;
    for(int j=0; j<30; ++j){
      if(i%num2[j]==0) ma2=j;
      if(i%num3[j]==0) ma3=j;
    }
    if(i/num3[ma3]/num2[ma2]==1) div++, ans+=ma2+ma3;
  }
  
  if(div==n) cout << ans << endl;
  else cout << -1 << endl;
  return 0;
}