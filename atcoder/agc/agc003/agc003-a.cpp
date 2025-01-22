#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  int ss=s.size();
  vector<bool> d(4);
  rep(i,ss){
    if(s[i]=='N') d[0]=true;
    else if(s[i]=='S') d[1]=true;
    else if(s[i]=='W') d[2]=true;
    else d[3]=true;
  }
  if(d[0]==d[1]&&d[2]==d[3]) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}