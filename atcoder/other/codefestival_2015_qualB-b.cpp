#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n >> m;
  vector<pair<int,int>> ans(m+1);
  for(int i=0; i<=m; ++i){
    ans[i].fi=0;
    ans[i].se=i;
  }
  for(int i=0; i<n; ++i){
    int k;
    cin >> k;
    ++ans[k].fi;
  }
  sort(all(ans));
  if(ans[m].fi*2>n) cout << ans[m].se << endl;
  else cout << "?\n";
  return 0;
}