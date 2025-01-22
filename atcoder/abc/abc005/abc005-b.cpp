#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  int t[n];
  rep(i,n) cin >> t[i];
  sort(t,t+n);
  cout << t[0] << endl;
  return 0;
}