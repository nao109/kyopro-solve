#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,k;
  cin >> n >> k;
  for(int i=0; i<k; ++i){
    ll a=0,ch=1;
    while(n>0){
      a+=(n%10)*ch;
      n/=10;
      ch*=8;
    }
    ch=1;
    while(a>0){
      if(a%9!=8) n+=(a%9)*ch;
      else n+=5*ch;
      ch*=10;
      a/=9;
    }
  }
  cout << n << endl;
  return 0;
}