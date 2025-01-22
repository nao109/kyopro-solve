#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n,r; cin >> n >> r;
  if(n<10) cout << r+100*(10-n);
  else cout << r;
  cout << endl;
  return 0;
}