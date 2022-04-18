#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define fi first
#define se second
#define pb push_back
int main(){
  cout << fixed << setprecision(15);
  int a,b,x,y; cin >> a >> b >> x >> y;
  int time=y*(abs(a-b))+x;
  if(a-b==1) time=x;
  else if(2*x<y) time=2*x*abs(a-b)+x;
  cout << time << endl;
  return 0;
}