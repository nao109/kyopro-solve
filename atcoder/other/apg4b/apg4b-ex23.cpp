#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  map<int,int> cnt;
  rep(i,n){
    int a; cin >> a;
    if(!cnt.count(a)) cnt[a]=1;
    else ++cnt[a];
  }
  int num=0,ans=0;
  for(auto a:cnt){
    if(a.se>num){
      ans=a.fi; num=a.se;
    }
  }
  cout << ans << " " << num << endl;
  return 0;
}