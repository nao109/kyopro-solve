#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int k,s; cin >> k >> s;
  int ans=0;
  rep(i,k+1)rep(j,k+1){
    int ch=s-i-j;
    if(0<=ch&&ch<=k) ++ans;
  }
  cout << ans << endl;
  return 0;
}