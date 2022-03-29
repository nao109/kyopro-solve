#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  string s,ch="keyence"; cin >> s;
  int ss=s.size(),cnt=0;
  vector<string> rid(1000);
  rep(i,ss){
    if(s[i]==ch[cnt]&&cnt<7) ++cnt;
    else rid[cnt].pb(s[i]);
  }
  if(cnt==7&&rid.size()==1) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}