#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<pair<int,int>> p(n);
  rep(i,n) cin >> p[i].first >> p[i].second;
  sort(p.begin(),p.end());
  cout << p[n-1].first+p[n-1].second << endl;
  return 0;
}