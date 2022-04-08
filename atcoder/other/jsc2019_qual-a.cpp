#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int m,d; cin >> m >> d;
  if(d<22){cout << 0 << endl; return 0;}
  int cnt=0;
  rep(i,m){
    rep(j,d){
      int d1=(j+1)%10,d10=(j+1)/10;
      if(d1>1&&d10>1&&d1*d10==i+1) ++cnt;
    }
  }
  cout << cnt << endl;
  return 0;
}