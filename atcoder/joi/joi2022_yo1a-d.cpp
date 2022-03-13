#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,m; cin >> n >> m;
  vector<int> a(n),b(m);
  rep(i,n) cin >> a.at(i); sort(a.begin(),a.end());
  rep(i,m) cin >> b.at(i); sort(b.begin(),b.end());
  vector<bool> ch(n,false);
  rep(i,n)rep(j,m){
    if(ch[i]) continue;
    if(a[i]==b[j]) ch[i]=true;
  }
  int ans=0;
  rep(i,n){
    if(ch[i]) ++ans;
  }
  cout << ans << endl;
  return 0;
}