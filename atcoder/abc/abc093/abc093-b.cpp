#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int a,b,k; cin >> a >> b >> k;
  vector<int> ans;
  rep(i,k){
    if(a+i<=b) ans.push_back(a+i);
    if(a<=b-k+1+i&&b-k+1+i<=b) ans.push_back(b-k+1+i);
  }
  sort(ans.begin(),ans.end());
  int s=ans.size();
  rep(i,s-1){
    if(ans[i+1]==ans[i]) ans[i]=0;
  }
  sort(ans.begin(),ans.end());
  rep(i,s){
    if(ans[i]>0) cout << ans[i] << endl;
  }
  return 0;
}