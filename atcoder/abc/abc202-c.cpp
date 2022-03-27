#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  ll n; cin >> n;
  vector<int> a(1000000),b(1000000),c(1000000); int cnt=0;
  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];
  rep(i,n) cin >> c[i];
  rep(i,n){
    rep(j,n){
      if(a[i]==b[c[j]-1]) cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}