#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,k;
  cin >> n >> k;
  vector<ll> a(n),cnt(n,k/n);
  map<ll,ll> x;
  for(ll &i:a){
    cin >> i;
    x[i]=0;
  }

  ll num=0;
  for(auto &i:x){
    i.se=num;
    num++;
  }

  k%=n;
  ll i=0;
  while(k>0){
    ++cnt[i];
    ++i;
    --k;
  }
  for(int i=0; i<n; ++i){
    cout << cnt[x[a[i]]] << endl;
  }
  return 0;
}