#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int l,r;
  cin >> l >> r;
  string s="atcoder";
  for(int i=l; i<r; ++i) cout << s[i-1];
  cout << "\n";
  return 0;
}