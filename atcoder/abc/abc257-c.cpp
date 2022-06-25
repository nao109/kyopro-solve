#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<pair<int,char>> w(n);
  for(int i=0; i<n; ++i) cin >> w[i].se;
  for(int i=0; i<n; ++i) cin >> w[i].fi;
  sort(all(w));

  map<int,pair<int,int>> a;
  for(int i=0; i<n; ++i){
    if(!a.count(w[i].fi)){
      if(w[i].se=='0') a[w[i].fi].fi=1, a[w[i].fi].se=0;
      else a[w[i].fi].fi=0, a[w[i].fi].se=1;
    }
    else{
      if(w[i].se=='0') a[w[i].fi].fi++;
      else a[w[i].fi].se++;
    }
  }
  
  int ans=0, child=0, adult=0;
  int mi=INT_MAX;
  vector<pair<int,int>> b;
  for(auto &i:a){
    b.emplace_back(i.se.fi,i.se.se);
    adult+=b.back().se;
  }
  
  ans=adult;
  for(auto &i:b){
    child+=i.fi;
    adult-=i.se;
    ans=max(child+adult,ans);
  }
  cout << ans << endl;
  return 0;
}