#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  ll h,w,n;
  cin >> h >> w >> n;
  vector<pair<ll,ll>> a(n);
  map<ll,ll> x,y;
  for(auto &i:a){
    cin >> i.fi >> i.se;
    x[i.fi]=0;
    y[i.se]=0;
  }
  int cnt=1;
  for(auto &i:x){
    i.se=cnt;
    cnt++;
  }
  cnt=1;
  for(auto &i:y){
    i.se=cnt;
    cnt++;
  }
  for(auto &i:a) cout << x[i.fi] << " " << y[i.se] << endl;
  return 0;
}