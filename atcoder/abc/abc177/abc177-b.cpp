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
  int ss=s.size(),ts=t.size(); 
  int cnt=1000;
  rep(i,ss-ts+1){
    int ch=0;
    rep(j,ts){
      if(s[i+j]!=t[j]) ++ch;
    }
    cnt=min(cnt,ch);
  }
  cout << cnt << endl;
  return 0;
}