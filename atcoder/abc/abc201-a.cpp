#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  vector<int> a(3); rep(i,3) cin >> a[i];
  sort(a.begin(),a.end());
  if(a[1]*2==a[0]+a[2]) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}