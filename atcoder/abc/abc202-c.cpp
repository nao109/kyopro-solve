#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> a(n),b(n),c(n);
  for(int &i:a) cin >> i;
  for(int &i:b) cin >> i;
  for(int &i:c) cin >> i;
  for(int i=0; i<n; ++i){
    --a[i],--b[i],--c[i];
  }
  vector<int> cnt(n);
  for(int i=0; i<n; ++i) ++cnt[b[c[i]]];
  ll ans=0;
  for(int i=0; i<n; ++i) ans+=cnt[a[i]];
  cout << ans << endl;
  return 0;
}