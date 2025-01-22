#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  int ans=0;
  rep(i,n){
    int a,b; cin >> a >> b;
    ans+=a*b;
  }
  ans*=1.05;
  cout << ans << endl;
  return 0;
}