#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n,l; cin >> n >> l;
  vector<string> s(n); rep(i,n) cin >> s[i];
  sort(s.begin(),s.end());
  string ans="";
  rep(i,n){
    ans=ans+s[i];
  }
  cout << ans << endl;
  return 0;
}