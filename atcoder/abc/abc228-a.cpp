#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int s,t,x; cin >> s >> t >> x;
  if(t-s<0) t+=24;
  if((s<=x&&x<t)||(s<=x+24&&x+24<t)) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}