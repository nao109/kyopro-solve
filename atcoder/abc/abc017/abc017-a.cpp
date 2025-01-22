#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int ans=0;
  rep(i,3){
    int s,e; cin >> s >> e;
    ans=ans+s/10*e;
  }
  cout << ans << endl;
  return 0;
}