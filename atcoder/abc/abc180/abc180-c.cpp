#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  cout << fixed << setprecision(15);
  ll n; cin >> n;
  set<ll> div;
  for(ll i=1; i*i<=n; ++i){
    if(n%i==0){div.insert(i); div.insert(n/i);}
  }
  for(ll i:div) cout << i << endl;
  return 0;
}