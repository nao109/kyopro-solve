#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; string s; cin >> n >> s;
  if(s[n-1]=='o') cout << "Yes\n";
  else cout << "No\n";
  return 0;
}