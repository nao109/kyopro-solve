#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int a,b,c; cin >> a >> b >> c;
  bool ch=false;
  for(int i=a; i<=b; ++i){
    if(!ch){
      if(i%c==0){cout << i << endl; ch=true;}
    }
  }
  if(!ch) cout << -1 << endl;
  return 0;
}