#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int n;
  cin >> n;
  int taka=0,aoki=0;
  for(int i=0; i<n; ++i){
    string s;
    cin >> s;
    int ss=s.size();
    for(int j=0; j<ss; ++j){
      if(s[j]=='R'){
        ++taka;
      }
      else if(s[j]=='B'){
        ++aoki;
      }
    }
  }
  if(taka>aoki) cout << "TAKAHASHI\n";
  else if(taka<aoki) cout << "AOKI\n";
  else cout << "DRAW\n";
  return 0;
}