#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s; int n=s.size();
  if(n==1){cout << 2 << endl; return 0;}
  vector<bool> chr(26,false);
  rep(i,n) chr[s[i]-'a']=true;
  int cnt=2;
  rep(i,26){
    if(chr[i]) ++cnt;
  }
  
  set<string> a;
  rep(i,n-1){
    vector<string> t(3,s.substr(i,2)); t[1][0]='.'; t[2][1]='.';
    rep(j,3){if(!a.count(t[j])) a.insert(t[j]);}
  }
  cnt+=a.size();
  cerr << cnt << endl;
  if(n>2){
    ++cnt;
    set<string> b;
    rep(i,n-2){
      vector<string> t(7,s.substr(i,3));
      rep(i,3) t[i+1][i]='.'; rep(i,3) t[i+4][i]='.';
      t[4][1]='.'; t[5][2]='.'; t[6][0]='.';
      rep(j,7){if(!b.count(t[j])) b.insert(t[j]);}
    }
    cnt+=b.size();
  }
  
  cout << cnt << endl;
  return 0;
}