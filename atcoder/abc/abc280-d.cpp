#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()

ll f(ll n,ll p){
  if(n==0) return 0;
  n/=p;
  return n+f(n,p);
}

int main(){
  ll k;
  cin >> k;
  vector<pair<ll,ll>> prime;

  //素因数分解
  ll x=k;
  for(int i=2; i*i<=x; ++i){
    int cnt=0;
    while(x%i==0) x/=i, cnt++;
    prime.emplace_back(i,cnt);
  }
  if(x!=1) prime.emplace_back(x,1);

  //二分探索 [l,r)
  ll l=0,r=k;
  while(r-l>1){
    ll m=l+(r-l)/2;
    bool flag=true;
    for(auto [p,cnt]:prime){
      if(f(m,p)<cnt) flag=false;
    }
    if(flag) r=m;
    else l=m;
  }

  cout << r << endl;
  return 0;
}