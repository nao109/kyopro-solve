#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int k; cin >> k;
  if(k%2==0) cout << k*k/4;
  else cout << (k+1)*(k-1)/4;
  cout << endl;
  return 0;
}