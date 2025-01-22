#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> cnt(n,0);
  rep(i,n-1){
    int a,b; cin >> a >> b;
    ++cnt[a-1]; ++cnt[b-1];
  }
  sort(cnt.begin(),cnt.end());
  bool ans=true;
  rep(i,n){
    if(i<n-1&&cnt[i]>1) ans=false;
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}