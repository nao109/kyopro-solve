#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int f(int a){
  if(a%2==1) --a;
  a/=2;
  return a;
}
int main(){
  cout << fixed << setprecision(7);
  int a,b,k; cin >> a >> b >> k;
  int cnt=0;
  while(cnt<k){
    a=f(a); b+=a; ++cnt;
    if(cnt==k) break;
    b=f(b); a+=b; ++cnt;
  }
  cout << a << " " << b << endl;
  return 0;
}