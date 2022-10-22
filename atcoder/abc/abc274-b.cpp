#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int h,w;
  cin >> h >> w;
  vector<string> c(h);
  for(int i=0; i<h; ++i) cin >> c[i];
  vector<int> x(w);
  for(int j=0; j<w; ++j){
    for(int i=0; i<h; ++i){
      if(c[i][j]=='#') x[j]++;
    }
  }
  for(int j=0; j<w; ++j) cout << x[j] << (j<w-1 ? " " : "\n");
  return 0;
}