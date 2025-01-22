#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int r; cin >> r;
  if(r<1200) cout << "ABC";
  else if(r<2800) cout << "ARC";
  else cout << "AGC";
  return 0;
}