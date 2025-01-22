#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n,s,t; cin >> n >> s >> t;
  int w; cin >> w;
  int ans=0;
  if(s<=w&&w<=t) ans=1;
  rep(i,n-1){
    int a; cin >> a;
    w+=a;
    if(s<=w&&w<=t) ans++;
  }
  cout << ans << endl;
  return 0;
}