#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(10);
  int n; cin >> n;
  ll l1=0,l2=0,l3=0;
  rep(i,n){
    ll a; cin >> a;
    l1+=abs(a);
    l3=max(l3,abs(a));
    l2+=a*a;
  }
  cout << l1 << endl;
  cout << sqrt(l2) << endl;
  cout << l3 << endl;
  return 0;
}