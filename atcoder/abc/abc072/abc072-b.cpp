#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  int ss=s.size();
  rep(i,ss){
    if(i%2==0) cout << s[i];
  }
  cout << endl;
  return 0;
}