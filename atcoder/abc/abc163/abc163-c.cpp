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
  vector<int> cnt(n,0);
  rep(i,n){
    int a; cin >> a;
    ++cnt[a-1];
  }
  rep(i,n) cout << cnt[i] << endl;
  return 0;
}