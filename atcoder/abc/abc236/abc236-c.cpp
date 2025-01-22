#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n,m; cin >> n >> m;
  vector<string> s(n);
  set<string> t;
  rep(i,n) cin >> s[i];
  rep(i,m){
    string ch; cin >> ch; t.insert(ch);
  }
  rep(i,n){
    if(t.count(s[i])) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}