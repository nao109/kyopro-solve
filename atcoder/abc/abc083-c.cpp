#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll x,y;
  cin >> x >> y;
  int ans=0;
  while(x<=y){
    x*=2;
    ++ans;
  }
  cout << ans << endl;
  return 0;
}