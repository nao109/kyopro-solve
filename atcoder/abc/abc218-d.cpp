#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<pair<int,int>> x(n);
  for(int i=0; i<n; ++i) cin >> x[i].fi >> x[i].se;
  sort(all(x));
  ll ans=0;
  for(int i=0; i<n; ++i){
    for(int j=i+1; j<n; ++j){
      for(int k=j+1; k<n; ++k){
        for(int l=k+1; l<n; ++l){
          if(x[i].fi==x[j].fi && x[k].fi==x[l].fi){
            if(x[i].se==x[k].se && x[j].se==x[l].se){
              ++ans;
            }
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}