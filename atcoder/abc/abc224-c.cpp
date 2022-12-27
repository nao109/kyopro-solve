#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<pair<int,int>> p(n);
  for(int i=0; i<n; ++i) cin >> p[i].fi >> p[i].se;
  
  int ans=0;
  for(int i=0; i<n; ++i){
    for(int j=i+1; j<n; ++j){
      for(int k=j+1; k<n; ++k){
        if((p[j].fi-p[i].fi)*(p[k].se-p[i].se)!=(p[k].fi-p[i].fi)*(p[j].se-p[i].se)) ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}