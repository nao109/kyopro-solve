#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,mi=10000000000000;
  cin >> n;
  for(ll i=1; i*i<=n; ++i){
    if(n%i==0) mi=min(i+n/i,mi);
  }
  cout << mi*2 << endl;
  return 0;
}