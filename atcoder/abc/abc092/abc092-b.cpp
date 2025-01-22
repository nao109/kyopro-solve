#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,s,g) for(int i=(s); i<(g); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,d,x; cin >> n >> d >> x;
  vector<int> a(n); rep(i,0,n) cin >> a[i];
  int cnt=0;
  rep(i,1,d+1){
    rep(j,0,n){
      if(a[j]==1) ++cnt;
      else if(i%a[j]==1) ++cnt;
    }
  }
  cout << cnt+x << endl;
  return 0;
}