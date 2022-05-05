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
  int n,m; cin >> n >> m;
  vector<int> ch(m,0); int ans=0;
  rep(i,n){
    int k; cin >> k;
    rep(j,k){
      int a; cin >> a; ++ch[a-1];
    }
  }
  rep(i,m){
    if(ch[i]==n) ++ans;
  }
  cout << ans << endl;
  return 0;
}