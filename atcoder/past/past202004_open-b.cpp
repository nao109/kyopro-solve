#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  vector<pair<int,string>> cnt(3,{0,""});
  cnt[0].se="a",cnt[1].se="b",cnt[2].se="c";
  rep(i,s.size()) ++cnt[s[i]-'a'].fi;
  sort(cnt.begin(),cnt.end());
  cout << cnt[2].se << endl;
  return 0;
}