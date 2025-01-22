#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  map<ll,ll> a;
  for(int i=0; i<n; ++i){
    int x;
    cin >> x;
    if(a.count(x)) ++a[x];
    else a[x]=1;
  }
  ll sum=0;
  for(auto i:a) sum+=i.se;
  ll ans=0;
  for(auto i:a){
    ans+=i.se*(sum-i.se);
  }
  cout << ans/2 << endl;
  return 0;
}