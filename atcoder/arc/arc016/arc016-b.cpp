#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<string> s(n);
  for(int i=0; i<n; ++i) cin >> s[i];
  int ans=0;
  for(int i=0; i<9; ++i){
    bool longs=false;
    for(int j=0; j<n; ++j){
      if(s[j][i]=='x') ++ans;
      if(s[j][i]=='o'){
        if(!longs){
          longs=true;
          ++ans;
        }
      }
      if(longs && s[j][i]!='o') longs=false;
    }
  }
  cout << ans << endl;
  return 0;
}