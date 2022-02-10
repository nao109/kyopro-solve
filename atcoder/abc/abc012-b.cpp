#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  int h,m,s;
  s=n%60;
  m=(n/60)%60;
  h=(n/60)/60;
  if(h<10) cout << 0;
  cout << h << ":";
  if(m<10) cout << 0;
  cout << m << ":";
  if(s<10) cout << 0;
  cout << s << endl;
  return 0;
}