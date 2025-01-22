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
  int n; cin >> n;
  int ans=1;
  if(n==1) ans=1;
  for(int i=2; i*i<=n; ++i){
    int ch=i;
    for(int ch=i; ch<=n; ch*=i){
      ans=max(ch,ans);
    }
  }
  cout << ans << endl;
  return 0;
}