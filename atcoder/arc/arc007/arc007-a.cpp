#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  char x; string s; cin >> x >> s;
  int ss=s.size();
  rep(i,ss){
    if(s[i]!=x) cout << s[i];
  }
  cout << endl;
  return 0;
}