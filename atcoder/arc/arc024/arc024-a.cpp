#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  cout << fixed << setprecision(15);
  int l,r,s;
  cin >> l >> r;
  map<int,int> L,R;
  rep(i,l){
    cin >> s;
    if(L.count(s)) ++L[s];
    else L[s]=1;
  }
  rep(i,r){
    cin >> s;
    if(R.count(s)) ++R[s];
    else R[s]=1;
  }
  int ans=0;
  for(auto i:L){
    if(R.count(i.fi)){
      ans+=min(i.se,R[i.fi]);
    }
  }
  cout << ans << endl;
  return 0;
}