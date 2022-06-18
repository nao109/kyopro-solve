#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  ll ans=1;
  for(int i=0; i<n; ++i) ans*=2;
  cout << ans << endl;
  return 0;
}