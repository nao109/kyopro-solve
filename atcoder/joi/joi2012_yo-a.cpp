#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
int main(){
  int p[3],j[2];
  for(int i=0; i<3; ++i) cin >> p[i];
  for(int i=0; i<2; ++i) cin >> j[i];
  sort(p,p+3);
  sort(j,j+2);
  cout << p[0]+j[0]-50 << endl;
  return 0;
}