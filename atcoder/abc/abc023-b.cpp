#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; string s; cin >> n >> s;
  string ch="b";
  int cnt=0; bool ans=false;
  if(s=="b") ans=true;
  else ++cnt;
  while(ch.size()<s.size()){
    if(cnt%3==1) ch="a"+ch+"c";
    else if(cnt%3==2) ch="c"+ch+"a";
    else ch="b"+ch+"b";
    if(ch==s){ans=true; break;}
    ++cnt;
  }
  if(ans) cout << cnt << endl;
  else cout << "-1\n";
  return 0;
}