#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  ll x; cin >> x;
  if(x>=0){
    cout << x/10 << endl;
  }
  else{
    if(x%10!=0) cout << x/10-1 << endl;
    else cout << x/10 << endl;
  }
  return 0;
}