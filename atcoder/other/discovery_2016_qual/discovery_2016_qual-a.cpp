#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  string s="DiscoPresentsDiscoveryChannelProgrammingContest2016";
  int w; cin >> w;
  string ans="";
  rep(i,s.size()){
    ans+=s[i];
    if((i+1)%w==0&&i<s.size()-1) ans+="\n";
  }
  cout << ans << endl;
  return 0;
}