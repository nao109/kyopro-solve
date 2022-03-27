#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> p;
  int cnt=0;
  rep(i,n){
    int a; cin >> a; p.pb(a);
    sort(p.begin(),p.end());
    if(p[0]==a) ++cnt;
  }
  cout << cnt << "\n";
  return 0;
}