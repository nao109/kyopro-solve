#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int a,b,c,d; cin >> a >> b >> c >> d;
  int ans=min(b,d)-max(a,c);
  cout << max(ans,0) << endl;
  return 0;
}