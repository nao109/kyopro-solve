#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> p(n); rep(i,n) cin >> p[i];
  int ans=0;
  rep(i,n-2){
    if(p[i]<p[i+1]&&p[i+1]<p[i+2]) ++ans;
    else if(p[i]>p[i+1]&&p[i+1]>p[i+2]) ++ans;
  }
  cout << ans << endl;
  return 0;
}