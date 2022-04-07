#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  ll h,w; cin >> h >> w;
  if(h==1||w==1) cout << 1 << endl;
  else cout << (h*w+1)/2 << endl;
  return 0;
}