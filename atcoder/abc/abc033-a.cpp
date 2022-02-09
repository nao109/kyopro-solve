#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string a; cin >> a;
  if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]) cout << "SAME" << endl;
  else cout << "DIFFERENT" << endl;
  return 0;
}