#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  ll n;
  cin >> n;
  for(ll a=0; a<=38; ++a){
    for(ll b=0; b<=26; ++b){
      if(pow(3,a)+pow(5,b)==n){
        cout << a << " " << b << endl; return 0;
      }
    }
  }
  cout << "-1\n";
  return 0;
}