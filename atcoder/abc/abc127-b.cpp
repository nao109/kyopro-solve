#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  ll r,d,x; cin >> r >> d >> x;
  rep(i,10){
    x=r*x-d;
    cout << x << endl;
  }
  return 0;
}