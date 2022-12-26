#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n,m;
  cin >> n >> m;
  vector<string> s(n);
  for(int i=0; i<n; ++i) cin >> s[i];

  int ans=0;
  for(int i=0; i<n; ++i){
    for(int j=i+1; j<n; ++j){
      bool flag=true;
      for(int k=0; k<m; ++k){
        cerr << s[i][k] << s[j][k] << endl;
        if(s[i][k]=='x' && s[j][k]=='x') flag=false;
      }
      if(flag){
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}