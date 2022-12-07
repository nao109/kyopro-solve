#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,ans=1;
  cin >> n;
  if(n==12) ans=1;
  else{
    for(int i=1; i<=11; ++i){
      ans=ans*(n-i)/i;
    }
  }
  cout << ans << endl;
  return 0;
}