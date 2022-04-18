#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  ll n; cin >> n;
  ll a=1,cnt=0;
  while(a<=n){
    a*=2; ++cnt;
  }
  cout << max((ll)0,cnt-1) << endl;
  return 0;
}