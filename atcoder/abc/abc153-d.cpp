#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
ll f(ll h){
  if(h==1) return 1;
  return f(h/2)*2+1;
}
int main(){
  ll h;
  cin >> h;
  cout << f(h) << endl;
  return 0;
}