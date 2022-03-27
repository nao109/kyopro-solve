#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  vector<int> e(6),l(6); int b;
  rep(i,6) cin >> e[i]; cin >> b; rep(i,6) cin >> l[i];
  int cnt=0;
  rep(i,6){
    rep(j,6){
      if(e[i]==l[j]) ++cnt;
    }
    cerr << cnt << endl;
  }
  if(cnt<3) cout << 0 << endl;
  else if(cnt==3) cout << 5 << endl;
  else if(cnt==4) cout << 4 << endl;
  else if(cnt==6) cout << 1 << endl;
  else{
    rep(i,6){
      if(l[i]==b){
        cout << 2 << endl; return 0;
      }
    }
    cout << 3 << endl;
  }
  return 0;
}