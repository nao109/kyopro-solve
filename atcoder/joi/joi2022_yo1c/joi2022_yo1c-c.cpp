#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,k; string s; cin >> n >> k >> s;
  int cntr=0;
  rep(i,n){
    if(s[i]=='R') ++cntr;
  }
  if(cntr==k) cout << "W\n";
  else cout << "R\n";
  return 0;
}