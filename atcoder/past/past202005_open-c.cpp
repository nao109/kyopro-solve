#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll a,r,n;
  cin >> a >> r >> n;
  if(r==1) cout << a << endl;
  else{
    ll i=1;
    while(a<=1000000000 && i<n){
      a*=r;
      ++i;
    }
    if(a>1000000000) cout << "large\n";
    else cout << a << endl;
  }
  return 0;
}