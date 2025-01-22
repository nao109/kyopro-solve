#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b; cin >> a >> b;
  if(a==b) cout << "Draw\n";
  else if(a==1) cout << "Alice\n";
  else if(b==1) cout << "Bob\n";
  else if(a<b) cout << "Bob\n";
  else cout << "Alice\n";
  return 0;
}