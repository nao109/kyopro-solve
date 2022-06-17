#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n >> m;
  vector<pair<int,int>> a(n+m);
  for(int i=0; i<n+m; ++i){
    cin >> a[i].fi;
    a[i].se=(i<n ? 0 : 1);
  }
  sort(all(a));
  int mi=INT_MAX;
  for(int i=0; i<n+m-1; ++i){
    if(a[i].se!=a[i+1].se){
      mi=min(a[i+1].fi-a[i].fi,mi);
    }
  }
  cout << mi << endl;
  return 0;
}