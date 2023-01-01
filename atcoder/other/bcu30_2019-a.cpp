#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const int mod = 1000000007;
int main(){
  int n,k;
  cin >> n >> k;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  sort(all(a));

  int ans=0;
  for(int i=0; i<n; ++i){
    if(i<n-k) ans+=a[i]*2;
    else ans+=a[i];
  }
  
  cout << ans << endl;
  return 0;
}