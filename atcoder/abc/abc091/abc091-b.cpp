#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  int n,m; cin >> n;
  map<string,int> a,s; string l;
  rep(i,n){
    cin >> l;
    if(a.count(l)) ++a[l];
    else a[l]=1;
  }
  cin >> m;
  rep(i,m){
    cin >> l;
    if(s.count(l)) ++s[l];
    else s[l]=1;
  }
  int ans=0;
  for(auto i:a){
    int ch=i.se;
    if(s.count(i.fi)) ch-=s[i.fi];
    ans=max(ch,ans);
  }
  cout << ans << endl;
  return 0;
}