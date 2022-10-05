#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,x,y,ans=0;
  cin >> n >> x >> y;
  for(ll i=1; i<=n; ++i){
    for(ll j=1; j<=n; ++j){
      for(ll k=1; k<=n; ++k){
        if(1<=x-i-j-k && x-i-j-k<=n){
          if(i*j*k*(x-i-j-k)==y){
            cout << "Yes\n";
            return 0;
          }
        }
      }
    }
  }
  cout << "No\n";
  return 0;
}