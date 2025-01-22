#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const int mod = 1000000007;
int main(){
  ll n;
  cin >> n;
  int p=1;
  for(ll i=1; i<=n; ++i) p=(p*i)%mod;
  cout << p << endl;
  return 0;
}