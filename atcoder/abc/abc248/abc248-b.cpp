#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  ll a,b,k; cin >> a >> b >> k;
  int cnt=0;
  while(a<b){
    a*=k; ++cnt;
  }
  cout << cnt << endl;
  return 0;
}