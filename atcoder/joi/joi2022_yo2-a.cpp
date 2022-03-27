#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int q; cin >> q;
  vector<string> s,ans;
  rep(i,q){
    string ch; cin >> ch;
    if(ch=="READ"){
      ans.pb(s.back());
      s.pop_back();
    }
    else s.pb(ch);
  }
  int anss=ans.size();
  rep(i,anss) cout << ans[i] << endl;
  return 0;
}