#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  vector<int> ch(n,0);
  rep(i,n){
    int a; cin >> a;
    ch[i]=a;
  }
  sort(ch.begin(),ch.end());
  int ans=1;
  rep(i,n-1){
    if(ch[i+1]!=ch[i]) ++ans;
  }
  cout << ans << endl;
  return 0;
}