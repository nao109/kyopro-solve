#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; string s; cin >> n >> s;
  if(n%2==1){cout << "-1\n"; return 0;}
  string sf=s,sb=s.substr(n/2); sf.erase(n/2);
  cerr << s << endl << sf << sb << endl;
  int cnt=0;
  rep(i,n/2){
    if(sf[i]!=sb[i]) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}