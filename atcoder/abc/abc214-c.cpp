	#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> s(n),t(n);
  for(int i=0; i<n; ++i) cin >> s[i];
  for(int i=0; i<n; ++i) cin >> t[i];
  vector<int> ans(n,-1);
  ans[0]=t[0];
  for(int i=1; i<n; ++i){
    ans[i]=min(t[i], ans[i-1]+s[i-1]);
  }
  
  for(int i=0; i<n; ++i) cout << ans[i] << endl;
  return 0;
}