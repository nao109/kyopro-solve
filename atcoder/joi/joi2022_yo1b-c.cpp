#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n; string s; cin >> n >> s;
  rep(i,n-1){
    if(s[i+1]=='J') cout << s[i] << "\n";
  }
  return 0;
}