#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int a,b; cin >> a >> b;
  if(b<10) b+=a*10;
  else if(b<100) b+=a*100;
  else b+=a*1000;
  bool ans=false;
  for(int i=1; i*i<=b; ++i){
    if(i*i==b) ans=true;
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}