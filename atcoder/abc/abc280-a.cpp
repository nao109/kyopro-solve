#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int h,w,ans=0;
  cin >> h >> w;
  for(int i=0; i<h; ++i){
    string s;
    cin >> s;
    for(int j=0; j<w; ++j){
      if(s[j]=='#') ans++;
    }
  }
  cout << ans << endl;
  return 0;
}