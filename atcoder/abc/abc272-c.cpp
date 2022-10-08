#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  if(n==2 && (a[0]+a[1])%2==1){
    cout << "-1\n";
    return 0;
  }
  sort(all(a));
  vector<int> odd,even;
  for(int &i:a){
    if(i%2==0) even.push_back(i);
    else odd.push_back(i);
  }
  int os=odd.size(),es=even.size();
  int ans;
  if(os<2) ans=even[es-1]+even[es-2];
  else if(es<2) ans=odd[os-1]+odd[os-2];
  else ans=max(odd[os-1]+odd[os-2],even[es-1]+even[es-2]);
  cout << ans << endl;
  return 0;
}