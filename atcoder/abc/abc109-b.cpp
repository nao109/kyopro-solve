#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  int n; cin >> n;
  vector<string> w(n); rep(i,n) cin >> w[i];
  bool ch1=false;
  rep(i,n-1){
    int ws=w[i].size();
    if(w[i][ws-1]!=w[i+1][0]){
      ch1=true; break;
    }
  }
  if(ch1) cout << "No\n";
  else{
    bool ch2=true;
    sort(w.begin(),w.end());
    rep(i,n-1){
      if(w[i]==w[i+1]){
        ch2=false; break;
      }
    }
    if(ch2) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}