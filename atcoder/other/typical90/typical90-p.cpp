#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,a,b,c;
  cin >> n >> a >> b >> c;
  int ans=10000;
  for(int i=0; i<10000; ++i){
    for(int j=0; j<10000; ++j){
      int bar=n-a*i-b*j;
      if(bar>=0 && bar%c==0) ans=min(i+j+bar/c,ans);
    }
  }
  cout << ans << endl;
  return 0;
}