#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<bool> check(2*n+1,true);
  check.at(0)=false;
  cout << 1 << "\n";
  fflush(stdout);
  while(true){
    int a; cin >> a;
    if(a==0) break;
    check[a-1]=false;
    rep(i,2*n+1){
      if(check[i]){
        cout << i+1 << "\n";
        fflush(stdout);
        check[i]=false;
        break;
      }
    }
  }
  return 0;
}