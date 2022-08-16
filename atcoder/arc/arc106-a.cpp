#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  for(ll a=0; a<=38; ++a){
    for(ll b=0; b<=26; ++b){
      ll pow3=1,pow5=1;
      for(ll i=0; i<a; ++i) pow3*=3;
      for(ll i=0; i<b; ++i) pow5*=5;
      if(pow3+pow5==n){
        cout << a << " " << b << endl;
        return 0;
      }
    }
  }
  cout << "-1\n";
  return 0;
}