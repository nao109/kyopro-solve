#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m,x,t,d;
  cin >> n >> m >> x >> t >> d;
  if(m<=x) cout << t+d*(m-x) << endl;
  else cout << t << endl;
  return 0;
}