#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const ll mod = 1000000007;
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int &i:a){
    cin >> i;
    i%=mod;
  }
  reverse(all(a));
  ll sum=0,ans=0;
  for(int i=0; i<n-1; ++i){
    sum+=a[i];
    ans=(ans + (sum * a[i+1]) % mod) % mod;
  }
  cout << ans << endl;
  return 0;
}