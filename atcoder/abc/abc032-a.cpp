#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b,n; cin >> a >> b >> n;
  while(n%a!=0||n%b!=0) n++;
  cout << n << endl;
  return 0;
}