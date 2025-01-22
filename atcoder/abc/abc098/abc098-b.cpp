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
  int n; string t; cin >> n >> t;
  int ans=0;
  rep(i,n-1){
    string p=t.substr(0,i+1),q=t.substr(i+1,n-i-1);
    set<char> a,b; int ch=0;
    rep(j,i+1){
      if(!a.count(p[j])) a.insert(p[j]);
    }
    rep(j,n-i-1){
      if(!b.count(q[j])) b.insert(q[j]);
    }
    for(char i:a){
      if(b.count(i)) ++ch;
    }
    ans=max(ch,ans);
  }
  cout << ans << endl;
  return 0;
}