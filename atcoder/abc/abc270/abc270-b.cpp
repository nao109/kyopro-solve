#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int x,y,z;
  cin >> x >> y >> z;
  if(x<0) x*=-1,y*=-1,z*=-1;
  int ans=0;
  if(y<0 || x<y) ans=x;
  else if(z<y){
    if(z<0) ans=abs(z)*2+x;
    else ans=x;
  }
  else ans=-1;
  cout << ans << endl;
  return 0;
}