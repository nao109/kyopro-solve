#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  string x; int n; cin >> x >> n;
  vector<string> s(n); rep(i,n) cin >> s[i];
  rep(i,n){
    int ss=s[i].size();
    rep(j,ss){
      s[i][j]=x[s[i][j]-'a'];
    }
  }
  sort(s.begin(),s.end());
  rep(i,n){
    int ss=s[i].size();
    rep(j,ss){
      s[i][j]=x[s[i][j]-'a'];
    }
  }
  rep(i,n) cout << s[i] << endl;
  return 0;
}