#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  int n; cin >> n;
  vector<ll> a(n); rep(i,n) cin >> a[i];
  sort(all(a));
  ll ans=1;
  rep(i,n){
    ans*=a[i];
    cerr << ans << endl;
    if(ans>1000000000000000000){ans=-1; break;}
  }
  cout << ans << endl;
  return 0;
}