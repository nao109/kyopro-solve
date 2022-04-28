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
  int n; ll x; cin >> n >> x;
  ll alco=0; x*=100;
  int ans=-1;
  rep(i,n){
    ll v,p; cin >> v >> p;
    alco+=v*p;
    if(alco>x){ans=i+1; break;}
  }
  //cerr << alco << " " << x << endl;
  cout << ans << endl;
  return 0;
}