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
  for(int i=0; i<s.size(); ++i){
    if(s[i]=='a') ans=i+1;
  }
  if(ans==0) cout << "-1\n";
  else cout << ans << endl;
  return 0;
}