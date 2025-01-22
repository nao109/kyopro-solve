#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n,k;
  cin >> n >> k;
  vector<pair<int,bool>> a(n,{0,false});
  for(int i=0; i<n; ++i) cin >> a[i].fi;
  for(int i=0; i<k; ++i){
    int c; cin >> c;
    a[c-1].se=true;
  }
  sort(all(a));
  cout << (a[n-1].se?"Yes\n":"No\n");
  return 0;
}