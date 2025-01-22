#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll x,k,d;
  cin >> x >> k >> d;
  if(x<0) x=-x;
  ll px=x;
  x-=d*min(k,px/d);
  k-=min(k,px/d);
  if(k%2==0) cout << abs(x) << endl;
  else cout << abs(x-d) << endl;
  return 0;
}