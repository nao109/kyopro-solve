#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
map<ll,ll> memo;
ll f(ll n){
  if(n==0) memo[n]=1;
  if(!memo.count(n)) memo[n]=f(n/2)+f(n/3);
  return memo[n];
}
int main(){
  ll n;
  cin >> n;
  ll ans=f(n);
  cout << ans << endl;
  return 0;
}