#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
int main(){
  cout << fixed << setprecision(15);
  int n,a,b; string s; cin >> n >> a >> b >> s;
  int ss=s.size(),cnt=0,cntb=0;
  vector<string> pass;
  rep(i,ss){
    if(s[i]=='a'){
      if(cnt<a+b){pass.pb("Yes"); ++cnt;}
      else pass.pb("No");
    }
    else if(s[i]=='b'){
      if(cnt<a+b&&cntb<b){pass.pb("Yes"); ++cnt; ++cntb;}
      else pass.pb("No");
    }
    else pass.pb("No");
  }
  rep(i,ss) cout << pass[i] << endl;
  return 0;
}