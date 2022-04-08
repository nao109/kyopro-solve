#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; string t; cin >> n >> t;
  vector<string> s(n);
  rep(i,n) s[i]=t.erase(i,1);
  rep(i,n) cerr << s[i] << endl;
  return 0;
}