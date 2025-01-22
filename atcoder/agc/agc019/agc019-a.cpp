#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll q,h,s,d,n;
  cin >> q >> h >> s >> d >> n;
  ll mi1=min(4*q,min(2*h,s));
  ll mi2=min(2*mi1,d);
  cout << (n/2)*mi2+(n%2)*mi1 << endl;
  return 0;
}