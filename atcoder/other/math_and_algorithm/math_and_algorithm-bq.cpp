#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const ll mod = 1000000007;
int main(){
  ll n;
  cin >> n;
  ll ans=(n*(n+1)%mod)*500000004%mod;
  ans=(ans*ans)%mod;
  cout << ans << endl;
  return 0;
}