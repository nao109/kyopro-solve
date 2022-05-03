#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
using P = pair<string,int>;
int main(){
  cout << fixed << setprecision(15);
  int n,x; cin >> n >> x;
  vector<int> l(n),d(n+1); rep(i,n) cin >> l[i];
  d[0]=0;
  rep(i,n) d[i+1]=d[i]+l[i];
  int ans=0;
  rep(i,n+1){
    if(d[i]<=x) ++ans;
  }
  cout << ans << endl;
  return 0;
}