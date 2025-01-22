#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll a,b,c,k;
  cin >> a >> b >> c >> k;
  if(abs(a-b)>1000000000000000000) cout << "Unfair\n" << endl;
  else cout << (k%2 ? b-a : a-b) << endl;
  return 0;
}