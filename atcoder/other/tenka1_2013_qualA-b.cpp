#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int n; cin >> n;
  int ans=0;
  rep(i,n){
    int sum=0;
    rep(i,5){
      int a; cin >> a; sum+=a;
    }
    if(sum<20) ++ans;
  }
  cout << ans << endl;
  return 0;
}