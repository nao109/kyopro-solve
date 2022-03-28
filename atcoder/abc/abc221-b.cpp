#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  vector<string> s(1); string t; cin >> s[0] >> t;
  int ss=s[0].size(); rep(i,ss-1) s.pb(s[0]);
  rep(i,ss-1) swap(s[i][i],s[i][i+1]);
  rep(i,ss) cerr << s[i] << endl;
  rep(i,ss){
    if(s[i]==t){
      cout << "Yes\n"; return 0;
    }
  }
  cout << "No\n";
  return 0;
}