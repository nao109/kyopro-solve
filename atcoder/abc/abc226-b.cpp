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
  vector<string> s(n,"");
  rep(i,n){
    int l; cin >> l;
    rep(j,l){string t; cin >> t; s[i]+=t;}
  }
  sort(s.begin(),s.end());
  set<string> cnt;
  rep(i,n){
    if(!cnt.count(s[i])) cnt.insert(s[i]);
  }
  int ans=cnt.size();
  cout << ans << endl;
  return 0;
}