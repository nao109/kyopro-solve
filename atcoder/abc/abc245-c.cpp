#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n,k; cin >> n >> k;
  vector<int> a(n),b(n);
  rep(i,n) cin >> a[i]; rep(i,n) cin >> b[i];
  bool ans=true;
  rep(i,n){
    vector<int> diff({a[i]-a[i+1],a[i]-b[i+1],b[i]-a[i+1],b[i]-b[i+1]});
    rep(j,4){
      if(abs(diff[j])>k){ans=false; break;}
    }
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}