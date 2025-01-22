#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(long long i=0; i<(n); ++i)
bool isprime(ll n){
  bool ans=true;
  for(ll i=2; i*i<=n; ++i){
    if(n%i==0){ans=false; break;}
  }
  return ans;
}
int main(){
  cout << fixed << setprecision(7);
  vector<ll> prime; ll x; cin >> x;
  rep(i,1000000){
    if(isprime(i+1)) prime.push_back(i+1);
  }
  int i=0; while(prime[i]<x) ++i;
  cout << prime[i] << endl;
  return 0;
}