#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int s,a,b; cin >> s >> a >> b;
  s-=a;
  int sum=250;
  int ch;
  if(s>0) ch=(s+b-1)/b;
  sum+=100*ch;
  cout << sum << endl;
  return 0;
}