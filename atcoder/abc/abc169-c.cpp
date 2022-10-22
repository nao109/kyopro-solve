#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll a;
  double b;
  cin >> a >> b;
  b*=100;
  ll lb=b;
  ll ans=a*lb/100;
  cout << ans << endl;
  return 0;
}