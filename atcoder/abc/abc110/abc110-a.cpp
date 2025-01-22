#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  vector<int> a(3); rep(i,3) cin >> a[i];
  sort(a.begin(),a.end());
  cout << a[2]*10+a[1]+a[0] << endl;
  return 0;
}