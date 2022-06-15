#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  ll ans=0;
  for(int c=1; c<n; ++c){
    for(int a=1; a*a<=n-c; ++a){
      if((n-c)%a==0){
        if(a*a<n-c) ans+=2;
        else ++ans;
      }
    }
  }
  cout << ans << endl;
  return 0;
}