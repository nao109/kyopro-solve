#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll n,t;
  cin >> n >> t;
  vector<ll> a(n);
  ll sum=0;
  for(ll &i:a){
    cin >> i;
    sum+=i;
  }
  t%=sum;
  
  ll chk=0;
  for(int i=0; i<n; ++i){
    chk+=a[i];
    if(chk-a[i]<=t && t<=chk){
      cout << i+1 << " " << t-chk+a[i] << endl;
      return 0;
    }
  }
  return 0;
}