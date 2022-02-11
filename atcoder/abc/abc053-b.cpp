#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  int ss=s.size();
  int l,r;
  rep(i,ss){
    if(s[i]=='A'){
      l=i; break;
    }
  }
  rep(i,ss){
    if(s[ss-1-i]=='Z'){
      r=ss-1-i; break;
    }
  }
  cout << r-l+1 << "\n";
  return 0;
}