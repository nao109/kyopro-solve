#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  int n; cin >> n;
  vector<int> l(n); rep(i,n) cin >> l[i];
  sort(l.begin(),l.end());
  int lsum=0;
  rep(i,n-1) lsum+=l[i];
  if(lsum>l[n-1]) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}