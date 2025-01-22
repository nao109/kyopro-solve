#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  vector<int> cnt(4,0);
  rep(i,6){
    int a; cin >> a;
    ++cnt[a-1];
  }
  sort(cnt.begin(),cnt.end());
  if(cnt[0]==1&&cnt[1]==1&&cnt[2]==2&&cnt[3]==2) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}