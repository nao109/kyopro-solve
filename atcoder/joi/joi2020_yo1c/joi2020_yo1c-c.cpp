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
  for(int &i:a) cin >> i;
  int ans=1,cnt=1;
  for(int i=1; i<n; ++i){
    if(a[i-1]<=a[i]) ++cnt;
    else ans=max(cnt,ans),cnt=1;
  }
  ans=max(cnt,ans);
  cout << ans << endl;
  return 0;
}