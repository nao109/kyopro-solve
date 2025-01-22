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
  vector<pair<int,int>> cnt(999);
  rep(i,999){cnt[i].fi=0; cnt[i].se=i+2;}
  for(int i=2; i<=1000; ++i){
    rep(j,n){
      if(a[j]%i==0) ++cnt[i-2].fi;
    }
  }
  sort(cnt.begin(),cnt.end());
  cout << cnt[998].se << endl;
  return 0;
}