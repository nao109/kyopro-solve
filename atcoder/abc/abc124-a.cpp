#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b; cin >> a >> b;
  int ans=0;
  rep(i,2){
    if(a>b){
      ans+=a; --a;
    }
    else{
      ans+=b; --b;
    }
  }
  cout << ans << endl;
  return 0;
}