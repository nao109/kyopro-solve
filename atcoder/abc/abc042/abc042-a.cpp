#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a[3];
  rep(i,3) cin >> a[i];
  sort(a,a+3);
  if(a[0]==5&&a[1]==5&&a[2]==7) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}