#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  string t; cin >> t;
  int n=t.size();
  vector<string> s(n); s[0]=t;
  if(n>1){
    rep(i,n-1){
      s[i+1]=s[i].substr(1);
      s[i+1].pb(s[i][0]);
    }
    rep(i,n) cerr << s[i] << endl;
    sort(s.begin(),s.end());
    cout << s[0] << "\n" << s[n-1] << "\n";
  }
  else cout << s[0] << "\n" << s[0] << "\n";
  return 0;
}