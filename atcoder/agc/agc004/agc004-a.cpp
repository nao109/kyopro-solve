#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a,a+3);
  if(a[0]%2==0 || a[1]%2==0 || a[2]%2==0) cout << 0 << endl;
  else cout << a[0]*a[1] << endl;
  return 0;
}