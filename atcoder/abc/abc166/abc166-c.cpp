#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n >> m;
  vector<int> h(n);
  for(int i=0; i<n; ++i) cin >> h[i];
  vector<set<int>> r(n);
  for(int i=0; i<m; ++i){
    int a,b;
    cin >> a >> b;
    r[a-1].insert(b-1);
    r[b-1].insert(a-1);
  }

  int ans=0;
  for(int i=0; i<n; ++i){
    if(r[i].empty()) ans++;
    else{
      bool flag=true;
      for(int j:r[i]){
        if(h[i]<=h[j]) flag=false;
      }
      if(flag) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}