#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(7);
  int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
  if(x1==x2) cout << abs(y2-y1)+1 << endl;
  else if(y1==y2) cout << abs(x2-x1)+1 << endl;
  else cout << abs(x2-x1)+abs(y2-y1)+1 << endl;
  return 0;
}