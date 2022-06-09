#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,x;
  cin >> n >> x;
  vector<ll> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  sort(all(a));
  int cnt=0;
  for(int i=0; i<n; ++i){
    if(i<n-1){
      if(x>=a[i]){
        x-=a[i];
        ++cnt;
      }
      else break;
    }
    else if(x==a[i]) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}