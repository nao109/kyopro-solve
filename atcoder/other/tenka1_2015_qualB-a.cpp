#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  vector<ll> a(20); a[0]=100,a[1]=100,a[2]=200;
  rep(i,17) a[i+3]=a[i+2]+a[i+1]+a[i];
  cout << a[19] << endl;
  return 0;
}