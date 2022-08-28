#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  for(int i=0; i<998244353; ++i){
    if((n-i)%998244353==0){
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}