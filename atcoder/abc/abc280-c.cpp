#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s,t;
  cin >> s >> t;
  int ss=s.size();
  for(int i=0; i<ss; ++i){
    if(s[i]!=t[i]){
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << ss+1 << endl;
  return 0;
}