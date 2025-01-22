#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<pair<int,int>> a(n);
  rep(i,n){
    cin >> a[i].first;
    a[i].second=i+1;
  }
  sort(a.begin(),a.end());
  rep(i,n){
    if(i<n-1) cout << a[i].second << " ";
    else cout << a[n-1].second << endl;
  return 0;
}