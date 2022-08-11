#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int x,ch=360;
  cin >> x;
  while(ch%x!=0) ch*=x*ch/gcd(x,ch);
  cout << 360/x << endl;
  return 0;
}