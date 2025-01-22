#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  string t; cin >> t;
  vector<int> s(4); rep(i,4) s[i]=t[i]-'0';
  cout << 0;
  rep(i,3) cout << s[i];
  cout << endl;
  return 0;
}