#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n,k; cin >> n >> k;
  if(n%k==0) cout << 0;
  else cout << 1;
  cout << endl;
  return 0;
}