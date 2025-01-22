#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  string s;
  cin >> s;
  int ans=0;
  for(char &i:s){
    if(i=='v') ans++;
    else ans+=2;
  }
  cout << ans << endl;
  return 0;
}