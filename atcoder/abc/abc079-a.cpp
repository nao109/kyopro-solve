#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string n; cin >> n;
  if(n[0]==n[1]&&n[0]==n[2]) cout << "Yes\n";
  else if(n[1]==n[2]&&n[1]==n[3]) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}