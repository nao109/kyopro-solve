#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n,k; cin >> n >> k;
  vector<int> l(n); rep(i,n) cin >> l[i];
  sort(l.begin(),l.end());
  int ans=0;
  rep(i,k) ans+=l[n-1-i];
  cout << ans << endl;
  return 0;
}