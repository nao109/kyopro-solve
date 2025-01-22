#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,k;
  cin >> n >> k;
  vector<int> a(n),b(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  for(int i=0; i<n; ++i) cin >> b[i];

  vector<bool> s(n),t(n);
  s[0]=true, t[0]=true;
  for(int i=1; i<n; ++i){
    if(s[i-1]){
      if(abs(a[i-1]-a[i])<=k) s[i]=true;
      if(abs(a[i-1]-b[i])<=k) t[i]=true;
    }
    if(t[i-1]){
      if(abs(b[i-1]-a[i])<=k) s[i]=true;
      if(abs(b[i-1]-b[i])<=k) t[i]=true;
    }
  }

  if(s[n-1] || t[n-1]) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}