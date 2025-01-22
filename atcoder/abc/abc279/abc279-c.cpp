#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int h,w;
  cin >> h >> w;
  vector<string> s(h),t(h);
  for(int i=0; i<h; ++i) cin >> s[i];
  for(int i=0; i<h; ++i) cin >> t[i];
  
  vector<string> sc(w),tc(w);
  for(int i=0; i<w; ++i){
    for(int j=0; j<h; ++j){
      sc[i]+=s[j][i];
      tc[i]+=t[j][i];
    }
  }
  sort(all(sc));
  sort(all(tc));
  
  cout << (sc==tc ? "Yes\n" : "No\n");
  return 0;
}