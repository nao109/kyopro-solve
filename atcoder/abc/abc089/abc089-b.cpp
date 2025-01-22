#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  vector<int> cnt(4,0);
  int n; cin >> n;
  rep(i,n){
    char s; cin >> s;
    if(s=='P') ++cnt[0];
    else if(s=='W') ++cnt[1];
    else if(s=='G') ++cnt[2];
    else ++cnt[3];
  }
  sort(cnt.begin(),cnt.end());
  if(cnt[0]==0) cout << "Three\n";
  else cout << "Four\n";
  return 0;
}