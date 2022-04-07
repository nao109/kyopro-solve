#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int n,a,b; cin >> n >> a >> b;
  vector<int> cnt(3,0);
  rep(i,n){
    int p; cin >> p;
    if(p<=a) ++cnt[0];
    else if(p<=b) ++cnt[1];
    else ++cnt[2];
  }
  rep(i,3) cerr << cnt[i] << endl;
  sort(cnt.begin(),cnt.end());
  cout << cnt[0] << endl;
  return 0;
}