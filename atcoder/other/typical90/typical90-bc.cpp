#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,p,q;
  cin >> n >> p >> q;
  vector<ll> a(n);
  for(int i=0; i<n; ++i){
    cin >> a[i];
    a[i]%=p;
  }
  sort(all(a));
  ll ans=0;
  for(int i=0; i<n; ++i){
    for(int j=i+1; j<n; ++j){
      for(int k=j+1; k<n; ++k){
        for(int l=k+1; l<n; ++l){
          for(int m=l+1; m<n; ++m){
            ll num=a[i]*a[j]%p*a[k]%p*a[l]%p*a[m]%p;
            if(num==q) ++ans;
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}