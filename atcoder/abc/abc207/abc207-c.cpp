#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
using P = pair<int,int>;
int main(void){
  int n;
  cin >> n;
  vector<pair<P,int>> lrt(n);
  for(int i=0; i<n; ++i){
    int t,l,r;
    cin >> t >> l >> r;
    lrt[i]={{l,r},t};
  }
  sort(all(lrt));

  int ans=0;

  for(int i=0; i<n; ++i){
    for(int j=i+1; j<n; ++j){
      int lj=lrt[j].fi.fi, ri=lrt[i].fi.se;
      int ti=lrt[i].se, tj=lrt[j].se;

      if(ti==1 || ti==3){
        if(tj==1 || tj==2){
          if(lj<=ri) ans++;
        }
        else{
          if(lj<ri) ans++;
        }
      }
      else if(lj<ri) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}