#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b,c,k,s,t;
  cin >> a >> b >> c >> k >> s >> t;
  int ans=a*s+b*t;
  if(s+t>=k) ans=ans-c*(s+t);
  cout << ans << endl;
  return 0;
}