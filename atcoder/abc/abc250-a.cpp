#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  cout << fixed << setprecision(15);
  int h,w,r,c; cin >> h >> w >> r >> c;
  if(h==1&&w==1) cout << 0 << endl;
  else if(h==1){
    if(c==1||c==w) cout << 1 << endl;
    else cout << 2 << endl;
  }
  else if(w==1){
    if(r==1||r==h) cout << 1 << endl;
    else cout << 2 << endl;
  }
  else{
    if((r==1&&c==1)||(r==h&&c==w)||(r==h&&c==1)||(r==1&&c==w)) cout << 2 << endl;
    else if(r==1||c==1||r==h||c==w) cout << 3 << endl;
    else cout << 4 << endl;
  }
  return 0;
}