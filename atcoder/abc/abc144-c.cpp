#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  vector<ll> div;
  for(ll i=1; i*i<=n; ++i){
    if(n%i==0){
      div.push_back(i);
      if(i*i!=n) div.push_back(n/i);
    }
  }
  int l=div.size();
  if(l%2) cout << div[l-1]*2-2 << endl;
  else cout << div[l-1]+div[l-2]-2 << endl;
  return 0;
}