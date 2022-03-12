#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<pair<int,int>> yx(n);
  rep(i,n) cin >> yx.at(i).second >> yx.at(i).first;
  string s; cin >> s;
  bool ans=false;
  rep(i,n)rep(j,i){
    if(i!=j){
      if(yx[i].first==yx[j].first){
        if(s[i]=='R'&&s[j]=='L'&&yx[i].second<yx[j].second){
          ans=true; break;
        }
        else if(s[i]=='L'&&s[j]=='R'&&yx[i].second>yx[j].second){
          ans=true; break;
        }
        else continue;
      }
      else continue;
    }
    else continue;
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}