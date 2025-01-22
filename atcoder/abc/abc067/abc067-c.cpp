#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n;
  cin >> n;
  vector<ll> a(n);
  ll sumall=0;
  for(ll i=0; i<n; ++i){
    cin >> a[i];
    sumall+=a[i];
  }
  ll suml=0,sumr=sumall,diff=LLONG_MAX;
  for(int i=0; i<n-1; ++i){
    suml+=a[0];
    sumr-=suml;
    diff=min(diff,abs(suml-sumr));
  }
  cout << diff << endl;
  return 0;
}