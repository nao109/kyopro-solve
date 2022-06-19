#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll x,y,z;
  cin >> x >> y >> z;
  while(z%17!=x || z%107!=y) z+=1000000007;
  cout << z << endl;
  return 0;
}