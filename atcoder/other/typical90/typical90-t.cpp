#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll a,b,c,ch=1;
  cin >> a >> b >> c;
  for(ll i=0; i<b; ++i) ch*=c;
  cout << (a<ch ? "Yes\n" : "No\n");
  return 0;
}