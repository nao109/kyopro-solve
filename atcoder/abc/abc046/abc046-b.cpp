#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,k;
  cin >> n >> k;
  ll ans=k;
  for(int i=0; i<n-1; ++i) ans*=k-1;
  cout << ans << endl;
  return 0;
}