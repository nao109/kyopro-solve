#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  string s;
  cin >> n >> s;
  int ans=1;
  for(int i=1; i<n; ++i){
    if(s[i]!=s[i-1]) ans++;
  }
  cout << ans << endl;
  return 0;
}