#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; string c; cin >> n >> c;
  int m=100,M=0;
  rep(i,4){
    int cnt=0;
    rep(j,n){
      if(c[j]=='1'+i) ++cnt;
    }
    cerr << cnt << "\n";
    m=min(cnt,m);
    M=max(cnt,M);
  }
  cout << M << " " << m << endl;
  return 0;
}