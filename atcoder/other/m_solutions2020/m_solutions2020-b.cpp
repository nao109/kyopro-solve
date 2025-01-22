#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int a,b,c,k; cin >> a >> b >> c >> k;
  int cnt=0;
  while(a>=b){
    b*=2; ++cnt;
  }
  while(b>=c){
    c*=2; ++cnt;
  }
  if(cnt<=k) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}