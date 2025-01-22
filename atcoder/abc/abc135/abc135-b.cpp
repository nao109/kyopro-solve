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
  vector<int> down;
  vector<int> a(n); rep(i,n) cin >> a[i];
  rep(i,n-1){
    if(a[i]>a[i+1]) down.pb(a[i]-a[i+1]);
  }
  if(down.size()==2&&down[0]==down[1]) cout << "YES\n";
  else if(down.size()==0) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}