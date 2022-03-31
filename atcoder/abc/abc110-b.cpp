#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n,m,x,y; cin >> n >> m >> x >> y;
  vector<int> xt(n),yt(m);
  rep(i,n) cin >> xt[i]; rep(i,m) cin >> yt[i];
  sort(xt.begin(),xt.end()); sort(yt.begin(),yt.end());
  if(max(x,xt[n-1])<min(y,yt[0])) cout << "No War\n";
  else cout << "War\n";
  return 0;
}