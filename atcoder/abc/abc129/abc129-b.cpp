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
  vector<int> w(n); rep(i,n) cin >> w[i];
  int ans=100000;
  rep(i,n-1){
    int s1=0,s2=0;
    rep(j,n){
      if(j<i+1) s1+=w[j];
      else s2+=w[j];
    }
    ans=min(abs(s1-s2),ans);
  }
  cout << ans << endl;
  return 0;
}