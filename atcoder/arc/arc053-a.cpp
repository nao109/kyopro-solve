#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int h,w; cin >> h >> w;
  int cnt=0;
  if(h==1&&w==1) cnt=0;
  else if(h==1) cnt=w-1;
  else if(w==1) cnt=h-1;
  else{
    cnt=(w-1)*h+(h-1)*w;
  }
  cout << cnt << endl;
  return 0;
}