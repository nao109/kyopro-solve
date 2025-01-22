#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int x=0,n; string s;
  cin >> n >> s;
  int ans=0;
  rep(i,n){
    if(s[i]=='I') ++x;
    else --x;
    ans=max(ans,x);
  }
  cout << ans << endl;
  return 0;
}