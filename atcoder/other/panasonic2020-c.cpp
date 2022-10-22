#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll a,b,c;
  cin >> a >> b >> c;
  if(4*a*b<(c-a-b)*(c-a-b)) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}