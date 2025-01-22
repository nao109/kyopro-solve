#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> a(n); rep(i,n) cin >> a[i];
  vector<int> b(n); rep(i,n) cin >> b[i];
  vector<int> c(n-1); rep(i,n-1) cin >> c[i];
  int sum=0;
  rep(i,n){
    sum+=b[a[i]-1];
  }
  rep(i,n-1){
    if(a[i]+1==a[i+1]) sum+=c[a[i]-1];
  }
  cout << sum << endl;
  return 0;
}