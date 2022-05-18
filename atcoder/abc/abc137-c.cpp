#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  ll n;
  cin >> n;
  map<string,ll> a;
  vector<string> s(n);
  for(int i=0; i<n; ++i){
    cin >> s[i];
    sort(all(s[i]));
    if(a.count(s[i])) ++a[s[i]];
    else a[s[i]]=1;
  }
  ll ans=0;
  for(auto i:a) ans+=(i.se==1?0:i.se*(i.se-1)/2);
  cout << ans << endl;
  return 0;
}