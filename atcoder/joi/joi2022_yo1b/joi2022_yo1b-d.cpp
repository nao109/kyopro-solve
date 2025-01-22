#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<pair<int,int>> ch(2000);
  rep(i,2000){
    ch[i].first=0;
    ch[i].second=i+1;
  }
  rep(i,n){
    int a; cin >> a;
    rep(i,2000){
      if(ch[i].second==a) ++ch[i].first;
    }
  }
  sort(ch.begin(),ch.end());
  int ans;
  rep(i,2000){
    if(ch[i].first>0){
      ans=ch[i].second; break;
    }
  }
  cout << ans << endl;
  return 0;
}