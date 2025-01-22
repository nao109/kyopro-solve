#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  long double txa,tya,txb,tyb; int t,v;
  cin >> txa >> tya >> txb >> tyb >> t >> v;
  bool flag=false;
  int n; cin >> n;
  rep(i,n){
    long double x,y; cin >> x >> y;
    long double l=0;
    l+=sqrt((txa-x)*(txa-x)+(tya-y)*(tya-y));
    l+=sqrt((txb-x)*(txb-x)+(tyb-y)*(tyb-y));
    cerr << i+1 << " " << l << endl;
    if(l<=t*v){flag=true; break;}
  }
  if(flag) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}