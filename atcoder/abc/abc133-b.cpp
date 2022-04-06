#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n,d; cin >> n >> d;
  int x[n][d];
  rep(i,n)rep(j,d) cin >> x[i][j];
  vector<int> len;
  rep(i,n){
    rep(j,i){
      int ch=0;
      rep(k,d){
        ch+=(x[i][k]-x[j][k])*(x[i][k]-x[j][k]);
      }
      len.pb(ch);
    }
  }
  int cnt=0;
  rep(i,len.size()){
    for(int j=0; j*j<=len[i]; ++j){
      if(j*j==len[i]) ++cnt;
    }
  }
  cout << cnt << endl;
  return 0;
}