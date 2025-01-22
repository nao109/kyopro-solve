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
  int n; cin >> n;
  vector<int> a(n); rep(i,n) cin >> a[i];
  int cnt=0;
  rep(i,n){
    if(i+1<a[i]){
      cerr << a[i] << i+1 << endl;
      if(a[a[i]-1]==i+1) ++cnt;
    }
  }
  cout << cnt << endl;
  return 0;
}