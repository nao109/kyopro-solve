#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n,k;
  cin >> n >> k;
  vector<int> h(n);
  for(int i=0; i<n; ++i){
    cin >> h[i];
  }
  sort(all(h));
  ll ans=0;
  if(n<=k){
    ans=0;
  }
  else{
    for(int i=0; i<n-k; ++i){
      ans+=h[i];
    }
  }
  cout << ans << endl;
  return 0;
}