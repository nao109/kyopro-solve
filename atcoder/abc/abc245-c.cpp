#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int n,k; cin >> n >> k;
  vector<int> a(n),b(n);
  rep(i,n) cin >> a[i]; rep(i,n) cin >> b[i];
  bool ch[2][n]; ch[0][0]=true; ch[1][0]=true;
  rep(i,n-1){
    if(ch[0][i]){
      if(abs(a[i+1]-a[i])<=k) ch[0][i+1]=true;
      else if(abs(b[i+1]-a[i])<=k) ch[1][i+1]=true;
    }
    else if(ch[1][i]){
      if(abs(a[i+1]-b[i])<=k||abs(b[i+1]-b[i])<=k) ch[1][i+1]=true;
    }
    else ch[0][i+1]=false; ch[0][i+1]=false;
  }
  if(ch[0][n-1]||ch[1][n-1]) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}