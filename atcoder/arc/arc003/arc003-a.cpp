#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int n; string r; cin >> n >> r;
  vector<double> cnt(5,0);
  rep(i,n){
    if(r[i]!='F') ++cnt[r[i]-'A'];
    else ++cnt[4];
  }
  double ans=0;
  rep(i,5){
    cnt[i]*=4-i;
    ans+=cnt[i];
  }
  ans/=n;
  cout << ans << endl;
  return 0;
}