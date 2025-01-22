#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  string s; cin >> s;
  int a[4]; rep(i,4) cin >> a[i];
  int ss=s.size();
  cerr << ss << endl;
  rep(i,ss){
    rep(j,4){
      if(i==a[j]) cout << '"';
    }
    cout << s[i];
  }
  if(a[3]==ss) cout << '"';
  cout << endl;
  return 0;
}