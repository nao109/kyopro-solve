#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int n; cin >> n;
  vector<int> a(n); rep(i,n) cin >> a[i];
  vector<pair<int,int>> cnt(n-1);
  rep(i,n-1){cnt[i].fi=0; cnt[i].se=i+2;}
  for(int i=2; i<=n; i++){
    rep(j,n){
      if(a[j]%i==0) ++cnt[i-2].fi;
    }
  }
  sort(cnt.begin(),cnt.end());
  cout << cnt[n-2].se << endl;
  return 0;
}