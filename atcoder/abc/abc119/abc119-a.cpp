#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  s.erase(0,5);
  if(s[0]=='1') cout << "TBD\n";
  else{
    if(s[1]>='5') cout << "TBD\n";
    else cout << "Heisei\n";
  }
  return 0;
}