#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int n; cin >> n;
  map<string,int> s;
  rep(i,n){
    string t; cin >> t;
    if(s.count(t)) ++s[t];
    else s[t]=1;
  }
  int m=0;
  for(auto i:s) m=max(m,i.se);
  vector<string> ans;
  for(auto i:s){
    if(i.se==m) ans.pb(i.fi);
  }
  sort(ans.begin(),ans.end());
  for(string i:ans) cout << i << endl;
  return 0;
}