#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  bool ans=false;
  int x1,x2,y1,y2; cin >> x1 >> y1 >> x2 >> y2;
  vector<int> x1a{x1+2,x1+2,x1+1,x1+1,x1-1,x1-1,x1-2,x1-2};
  vector<int> x2a{x2+2,x2+2,x2+1,x2+1,x2-1,x2-1,x2-2,x2-2};
  vector<int> y1a{y1+1,y1-1,y1+2,y1-2,y1+2,y1-2,y1+1,y1-1};
  vector<int> y2a{y2+1,y2-1,y2+2,y2-2,y2+2,y2-2,y2+1,y2-1};
  rep(i,8)rep(j,8){
    if(x1a[i]==x2a[j]&&y1a[i]==y2a[j]) ans=true;
    else continue;
  }
  if(ans) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}