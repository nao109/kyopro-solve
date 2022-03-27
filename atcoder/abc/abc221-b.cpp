#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  string s,t; cin >> s >> t;
  int ss=s.size();
  int cnt=0;
  rep(i,ss){
    if(s[i]==t[i]) ++cnt;
  }
  else cout << "No\n";
  return 0;
}