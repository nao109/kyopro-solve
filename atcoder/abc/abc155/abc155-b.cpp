#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  bool ans=true;
  rep(i,n){
    int a; cin >> a;
    if(a%2==0){
      if(a%3==0||a%5==0) continue;
      else {
        ans=false; break;
      }
    }
  }
  if(ans) cout << "APPROVED\n";
  else cout << "DENIED\n";
  return 0;
}