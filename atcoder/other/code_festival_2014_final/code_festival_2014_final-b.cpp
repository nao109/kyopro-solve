#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  string s; cin >> s;
  int ss=s.size(); int ans=0;
  rep(i,ss){
    int memo=s[i]-'0';
    if(i%2==1) memo*=-1;
    ans+=memo;
  }
  cout << ans << endl;
  return 0;
}