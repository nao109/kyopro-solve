#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b,c; cin >> a >> b >> c;
  if(a+b==c&&a-b==c) cout << "?" << endl;
  else if(a+b==c&&a-b!=c) cout << "+" << endl;
  else if(a+b!=c&&a-b==c) cout << "-" << endl;
  else cout << "!" << endl;
  return 0;
}