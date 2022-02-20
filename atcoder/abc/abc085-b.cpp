#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> d(n);
  rep(i,n) cin >> d[i];
  sort(d.begin(),d.end());
  rep(i,n-1){
    if(d[i]==d[i+1]) d[i]=0;
  }
  int ans=0;
  sort(d.begin(),d.end());
  rep(i,n){
    if(d[i]>0) ++ans;
  }
  cout << ans << endl;
  return 0;
}