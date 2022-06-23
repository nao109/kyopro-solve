#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> a(n),b(n),c(n);
  for(int i=0; i<n; ++i) cin >> a[i];
  for(int i=0; i<n; ++i) cin >> b[i];
  for(int i=0; i<n; ++i) cin >> c[i];
  map<int,int> ch;
  for(int i=0; i<n; ++i){
    if(ch.count(b[c[i]-1])) ++ch[b[c[i]-1]];
    else ch[b[c[i]-1]]=1;
  }
  int ans=0;
  for(int i=0; i<n; ++i){
    if(ch.count(a[i])) ans+=ch[a[i]];
  }
  cout << ans << endl;
  return 0;
}