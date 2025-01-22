#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int s,w; cin >> s >> w;
  if(s>w) cout << "safe\n";
  else cout << "unsafe\n";
  return 0;
}