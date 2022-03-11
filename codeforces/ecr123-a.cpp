#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
void check(){
  
}
int main(){
  cout << fixed << setprecision(7);
  int t; cin >> t;
  rep(i,t){
    string s;
    rep(i,6){
      char t; cin >> t;
      s.push_back(t);
      if(s.at(s.size()-1)=='R'||s.at(s.size()-1)=='G'||s.at(s.size()-1)=='B'){
        if(s.find(s.at(s.size()-1)-'A'+'a')!=string::npos){
          s.erase(s.find(s.at(s.size()-1)-'A'+'a'),1); s.erase(s.size()-1,1);
        }
      }
    }
  if(s.empty()) cout << "YES\n";
  else cout << "NO\n";
  }
  return 0;
}