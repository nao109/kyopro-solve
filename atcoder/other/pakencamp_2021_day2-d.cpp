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
  vector<int> a(m);
  rep(i,m) a[i]=0;
  rep(i,n){
    int c; cin >> c; ++a[c-1];
  }
  int mi=3000,Ma=0;
  rep(i,m){
    if(mi>a[i]) mi=a[i];
    if(Ma<a[i]) Ma=a[i];
  }
  rep(i,m) cerr << a[i] << endl;
  cout << mi << " " << Ma << endl;
  return 0;
}