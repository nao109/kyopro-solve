#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  n=n*1.08;
  cout << n << endl;
  if(n<206) cout << "Yay!\n";
  else if(n==206) cout << "so-so\n";
  else cout << ":(\n";
  return 0;
}