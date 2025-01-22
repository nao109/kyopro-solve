#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,a,b;
  cin >> n >> a >> b;
  ll cnt=n/(a+b)*a+min(n%(a+b),a);
  cout << cnt << endl;
  return 0;
}