#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<ll> s(n);
  for(ll &i:s) cin >> i;

  vector<ll> a(n);
  for(int i=0; i<n; ++i){
    if(i==0) a[i]=s[i];
    else a[i]=s[i]-s[i-1];
  }

  for(int i=0; i<n; ++i){
    cout << a[i] << (i<n-1 ? " " : "\n");
  }
  return 0;
}