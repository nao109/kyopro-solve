#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  vector<int> a(10); rep(i,10) cin >> a[i];
  cout << a[a[a[0]]] << endl;
  return 0;
}