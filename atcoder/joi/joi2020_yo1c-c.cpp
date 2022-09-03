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
  for(int i=0; i<n-1; ++i){
    if(a[i]<=a[i+1]) ++cnt;
    else ans=max(cnt,ans),cnt=1;
  }
  cout << ans << endl;
  return 0;
}