#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  ll a,b,c; cin >> a >> b >> c;
  if(b>=c) cout << b+c << endl;
  else{
    int cnt=b*2+min(a+1,c-b);
    cout << cnt << endl;
  }
  return 0;
}