#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> d(n); rep(i,n) cin >> d[i];
  sort(d.begin(),d.end());
  rep(i,n) cout << d[i] << endl;
  if(d[n/2-1]==d[n/2]) cout << 0 << endl;
  else{
    cout << d[n/2+1]-d[n/2] << endl;
  }
  return 0;
}