#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
string solve(){
  ll n;
  cin >> n;
  vector<ll> cnt(2,0);
  for(ll i=1; i*i<=n; ++i){
    if(n%i==0){
      if(i%2==0) ++cnt[0];
      else ++cnt[1];
      if(i*i<n){
        if((n/i)%2==0) ++cnt[0];
        else ++cnt[1];
      }
    }
  }
  if(cnt[0]==cnt[1]) return "Same";
  else if(cnt[0]>cnt[1]) return "Even";
  else return "Odd";
}
int main(){
  int t;
  cin >> t;
  for(int i=0; i<t; ++i) cout << solve() << endl;
  return 0;
}