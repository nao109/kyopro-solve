#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  int n,m; cin >> n >> m;
  set<int> a,b;
  rep(i,n){
    int h; cin >> h; a.insert(h);
  }
  rep(i,m){
    int h; cin >> h; b.insert(h);
  }
  set<int> c;
  for(int i:b){
    if(!a.count(i)) c.insert(i);
  }
  cout << c.size() << endl;
  for(int i:c) cout << i << endl;
  return 0;
}