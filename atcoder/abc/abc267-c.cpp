#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,m;
  cin >> n >> m;
  vector<ll> a(n);
  for(ll &i:a) cin >> i;
  int ma=LLONG_MIN;
  for(int i=0; i<n-m+1; ++i){
    int sum=0;
    for(int j=0; j<m; ++j){
      sum+=j*s[i+j];
    }
    cerr << sum << endl;
    ma=max(sum,ma);
  }
  cout << ma << endl;
  return 0;
}