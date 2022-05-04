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
  string s; cin >> s; int n=s.size();
  int cntf=0,cntb=0;
  while(s[cntf]=='a') ++cntf;
  while(s[n-1-cntb]=='a') ++cntb;
  int sub=cntb-cntf;
  string t="";
  if(sub<0) cout << "No\n";
  else if(sub==0){
    t=s; reverse(all(t));
    if(s==t) cout << "Yes\n";
    else cout << "No\n";
  }
  else{
    rep(i,sub) t+='a';
    s=t+s; t=s; reverse(all(t));
    if(s==t) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}