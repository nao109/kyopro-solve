#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  int h,w; cin >> h >> w;
  int a[h][w]; rep(i,h)rep(j,w) cin >> a[i][j];
  bool ans=true;
  rep(i,h)rep(j,w){
    for(int k=i+1; k<h; ++k)for(int l=j+1; l<w; ++l){
      if(a[i][j]+a[k][l]>a[k][j]+a[i][l]){ans=false; break;}
    }
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}