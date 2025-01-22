#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int l,a,b,c,d;
  cin >> l >> a >> b >> c >> d;
  int day=max((a+c-1)/c,(b+d-1)/d);
  cout << l-day << endl;
  return 0;
}