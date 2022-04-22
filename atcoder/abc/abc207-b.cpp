#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  ll a,b,c,d; cin >> a >> b >> c >> d;
  if(c*d-b<=0){cout << -1 << endl; return 0;}
  vector<ll> num(2); num[0]=a; num[1]=0;
  ll cnt=0;
  while(num[0]>num[1]*d){
    num[0]+=b; num[1]+=c; ++cnt;
  }
  cout << cnt << endl;
  return 0;
}