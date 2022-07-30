#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,a,b;
  cin >> n >> a >> b;
  ll ans=(n/(a+b))*a+min(a,n%(a+b));
  cout << ans << endl;
  return 0;
}