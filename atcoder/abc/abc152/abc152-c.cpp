#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> p(n);
  for(int i=0; i<n; ++i) cin >> p[i];
  int ans=0;
  int mi=p[0];
  for(int i=0; i<n; ++i){
    mi=min(p[i],mi);
    if(mi==p[i]) ++ans;
  }
  cout << ans << endl;
  return 0;
}