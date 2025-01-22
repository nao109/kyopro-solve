#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int a,b;
  cin >> a >> b;
  ll ans=1;
  for(int i=0; i<b; ++i) ans*=a;
  cout << ans << endl;
  return 0;
}