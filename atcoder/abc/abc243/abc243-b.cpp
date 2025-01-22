#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> a(n); rep(i,n) cin >> a.at(i);
  vector<int> b(n); rep(i,n) cin >> b.at(i);
  int cnt1=0,cnt2=0;
  rep(i,n){
    if(a[i]==b[i]) ++cnt1;
    rep(j,n){
      if(a[i]==b[j]&&i!=j) ++cnt2;
    }
  }
  cout << cnt1 << "\n" << cnt2 << "\n";
  return 0;
}