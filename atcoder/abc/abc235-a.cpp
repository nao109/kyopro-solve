#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  string n; cin >> n;
  int ch=n[0]+n[1]+n[2]-3*'0';
  cout << ch*111 << endl;
  return 0;
}