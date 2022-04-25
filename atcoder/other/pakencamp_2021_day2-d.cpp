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
  vector<int> cnt(m,0);
  rep(i,n){
    int a; cin >> a; ++cnt.at(a-1);
  }
  sort(all(cnt));
  cout << cnt.at(0) << " " << cnt.at(m-1) << endl;
  return 0;
}