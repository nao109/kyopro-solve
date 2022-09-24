#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,ans=-1;
  string s;
  cin >> n >> s;
  if(n==2 && s[0]!=s[2]) ans=1;
  else if(n==3 && s[0]!=s[2]) ans=1;
  else{
    if(s[0]!=s[n-1]) ans=1;
    else{
      for(int i=1; i<n-2; ++i){
        if(s[0]!=s[i] && s[i+1]!=s[n-1]) ans=2;
      }
    }
  }
  cout << ans << endl;
  return 0;
}