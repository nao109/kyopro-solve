#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; string s,t; cin >> n >> s >> t;
  rep(i,n) cout << s[i] << t[i];
  cout << endl;
  return 0;
}