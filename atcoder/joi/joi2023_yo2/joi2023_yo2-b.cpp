#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define rep(i,n) for(int i=0; i<(n); ++i)
const int INF = 1000000000;
int main(){
  int n;
  cin >> n;

  if(n<=30){
    vector<int> a(n),b(n),c(n),d(n);
    for(int i=0; i<n; ++i) cin >> a[i];
    for(int i=0; i<n; ++i) cin >> b[i];
    for(int i=0; i<n; ++i) cin >> c[i];
    for(int i=0; i<n; ++i) cin >> d[i];
    int mi=INF,ma=0,ans=INF;
    rep(i,n)rep(j,n)rep(k,n)rep(l,n){
      ma=max(max(a[i],b[j]),max(c[k],d[l]));
      mi=min(min(a[i],b[j]),min(c[k],d[l]));
      ans=min(ma-mi,ans);
    }
    cout << ans << endl;
  }
  
  return 0;
}