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
  vector<bool> ch(n,false); ch[0]=true;
  rep(i,n-1){
    if(ch[i]){
      if(abs(a[i+1]-a[i])<=k||abs(b[i+1]-a[i])<=k) ch[i+1]=true;
      else if(abs(a[i+1]-b[i])<=k||abs(b[i+1]-b[i])<=k) ch[i+1]=true;
    }
  }
  if(ch[n-1]) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}