#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  sort(a.begin(),a.end());
  int alice=0,bob=0;
  rep(i,n){
    if(i%2==0) alice+=a[n-1-i];
    else bob+=a[n-1-i];
  }
  cout << alice-bob << endl;
  return 0;
}