#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n,k,x,y;
  cin >> n >> k >> x >> y;
  int ans=0;
  if(n<=k) ans+=x*n;
  else ans+=x*k+y*(n-k);
  cout << ans << endl;
  return 0;
}