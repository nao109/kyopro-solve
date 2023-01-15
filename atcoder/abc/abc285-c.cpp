#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s;
  cin >> s;
  int n=s.size();
  ll ans=0;
  ll k26=1;
  for(int i=0; i<n; ++i){
    ans+=(s[n-i-1]-'A'+1)*k26;
    k26*=26;
  }
  cout << ans << endl;
  return 0;
}