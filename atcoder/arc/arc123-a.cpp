#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll a,b,c;
  cin >> a >> b >> c;
  if(a>c) swap(a,c);
  ll ans=0;
  if(2*b!=a+c){
    if(2*b-a-c<=0) ans=abs(2*b-a-c)/2;
    else ans=abs(2*b-a-c);
  }
  cout << ans << endl;
  return 0;
}