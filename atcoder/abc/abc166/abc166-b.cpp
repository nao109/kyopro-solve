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
  vector<int> cnt(n,0);
  rep(i,k){
    int d; cin >> d;
    rep(j,d){
      int a; cin >> a;
      ++cnt[a-1];
    }
  }
  int ans=0;
  rep(i,n){
    if(cnt[i]==0) ++ans;
  }
  cout << ans << endl;
  return 0;
}