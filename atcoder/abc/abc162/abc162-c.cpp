#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int a;
  cin >> a;
  ll ans=0;
  for(int i=1; i<=a; ++i){
    for(int j=1; j<=a; ++j){
      for(int k=1; k<=a; ++k){
        ans+=gcd(i,gcd(j,k));
      }
    }
  }
  cout << ans << endl;
  return 0;
}