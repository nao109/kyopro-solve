#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a; string s;
  cin >> a >> s;
  if(a>=3200) cout << s;
  else cout << "red";
  cout << endl;
  return 0;
}