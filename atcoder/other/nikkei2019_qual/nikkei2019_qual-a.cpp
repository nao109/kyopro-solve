#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,a,b; cin >> n >> a >> b;
  if(a+b<=n) cout << n-a-b << endl;
  if(max(a,b)<n) cout << n-max(a,b) << endl;
  return 0;
}