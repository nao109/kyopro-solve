#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  vector<pair<char,char>> x(26);
  rep(i,26){x[i].se='a'+i; cin >> x[i].fi;}
  sort(all(x));
  int n; cin >> n;
  vector<string> s(n);
  rep(i,n){
    cin >> s[i];
    int ss=s[i].size();
    rep(j,ss) s[i][j]=x[s[i][j]-'a'].se;
  }
  sort(all(s));
  //rep(i,n) cerr << s[i] << endl;
  rep(i,26) swap(x[i].fi,x[i].se);
  sort(all(x));
  //rep(i,26) cerr << x[i].fi << " " << x[i].se << endl;
  rep(i,n){
    int ss=s[i].size();
    rep(j,ss) s[i][j]=x[s[i][j]-'a'].se;
  }
  rep(i,n) cout << s[i] << endl;
  return 0;
}