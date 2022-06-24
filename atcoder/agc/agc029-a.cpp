#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s;
  cin >> s;
  int n=s.size();
  bool flag=true;
  ll ans=0;
  while(flag){
    flag=false;
    for(int i=0; i<n-1; ++i){
      if(s[i]=='B' && s[i+1]=='W'){
        swap(s[i],s[i+1]);
        flag=true;
        ++ans;
      }
    }
  }
  cout << ans << endl;
  return 0;
}