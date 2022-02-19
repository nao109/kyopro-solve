#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> a(n); rep(i,n) cin >> a[i];
  sort(a.begin(),a.end());
  cout << a[n-1]-a[0] << endl;
  return 0;
}