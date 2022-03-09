#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  ll h,w; cin >> h >> w;
  ll ans=0;
  if(h%2==0&&w%2==0) ans=h*w/2;
  else if(h%2==0&&w%2==1){
    ans=((w+1)/2)*h;
    ans-=h/2;
  }
  else if(h%2==1&&w%2==0){
    ans=((h+1)/2)*w;
    ans-=w/2;
  }
  else ans=(h*w+1)/2;
  cout << ans << endl;
  return 0;
}