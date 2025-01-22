#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b,c,d; cin >> a >> b >> c >> d;
  if(abs(c-a)<=d) cout << "Yes\n";
  else if(abs(b-a)<=d&&abs(c-b)<=d) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}