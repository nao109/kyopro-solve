#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll a;
  string b;
  cin >> a >> b;
  ll lb=(b[0]-'0')*100+(b[2]-'0')*10+(b[3]-'0');
  ll ans=a*lb/100;
  cout << ans << endl;
  return 0;
}