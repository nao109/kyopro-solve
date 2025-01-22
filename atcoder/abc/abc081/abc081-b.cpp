#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> a(n); rep(i,n) cin >> a[i];
  bool ans=true;
  int cnt=0;
  while(ans){
    rep(i,n){
      if(a[i]%2==0) a[i]/=2;
      else{ans=false; break;}
    }
    ++cnt;
  }
  --cnt;
  cout << cnt << endl;
  return 0;
}