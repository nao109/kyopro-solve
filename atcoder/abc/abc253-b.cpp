#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int h,w;
  cin >> h >> w;
  vector<string> s(h);
  for(int i=0; i<h; ++i) cin >> s[i];

  for(int i=0; i<h; ++i){
    for(int j=0; j<w; ++j){
      for(int k=0; k<h; ++k){
        for(int l=0; l<w; ++l){
          if(i!=k || j!=l){
            if(s[i][j]=='o' && s[k][l]=='o'){
              cout << abs(i-k)+abs(l-j) << endl;
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}