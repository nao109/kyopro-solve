#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  long double a,b;
  cin >> a >> b;
  long double ans=floor(a*b);
  cout << setprecision(20) << ans << endl;
  return 0;
}