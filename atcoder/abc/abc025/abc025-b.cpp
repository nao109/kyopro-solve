#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n,a,b; cin >> n >> a >> b;
  string s; int d,ans=0;
  rep(i,n){
    cin >> s >> d;
    if(s=="East"){
      if(d<a) ans+=a;
      else if(d>b) ans+=b;
      else ans+=d;
    }
    else{
      if(d<a) ans-=a;
      else if(d>b) ans-=b;
      else ans-=d;
    }
  }
  if(ans<0) cout << "West " << -ans << "\n";
  else if(ans>0) cout << "East " << ans << "\n";
  else cout << 0 << "\n";
  return 0;
}