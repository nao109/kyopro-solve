#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s,t;
  cin >> s >> t;
  int n=s.size(),m=t.size();
  if(s==t) cout << "Yes\n";
  else if(n>m || s[0]!=t[0] || s.back()!=t.back()) cout << "No\n";
  else{
    vector<pair<char,int>> cs,ct;
    cs.emplace_back(s[0],1);
    ct.emplace_back(t[0],1);
    for(int i=1; i<n; ++i){
      if(s[i-1]==s[i]) ++cs.back().se;
      else cs.emplace_back(s[i],1);
    }
    for(int i=1; i<m; ++i){
      if(t[i-1]==t[i]) ++ct.back().se;
      else ct.emplace_back(t[i],1);
    }

    if(cs.size()==ct.size()){
      bool flag=true;
      for(int i=0; i<cs.size(); ++i){
        if(cs[i].fi==ct[i].fi){
          if(cs[i].se==ct[i].se) continue;
          else if(cs[i].se>=2 && cs[i].se<ct[i].se) continue;
          else flag=false;
        }
        else flag=false;
      }
      if(flag) cout << "Yes\n";
      else cout << "No\n";
    }
    else cout << "No\n";
  }
  return 0;
}