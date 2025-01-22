#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll x,k;
  cin >> x >> k;
  for(int i=0; i<k; ++i){
    ll cx=x;
    for(int j=0; j<i; ++j) cx/=10;
    if(cx%10<5) cx=(cx/10)*10;
    else cx=((cx+9)/10)*10;
    for(int j=0; j<i; ++j) cx*=10;
    x=cx;
  }
  cout << x << endl;
  return 0;
}