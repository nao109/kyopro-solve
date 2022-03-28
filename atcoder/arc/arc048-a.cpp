#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  ll a,b; cin >> a >> b;
  if(a>0||b<0) cout << b-a << endl;
  else cout << b-a-1 << endl;
  return 0;
}