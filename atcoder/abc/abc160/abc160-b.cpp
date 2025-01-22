#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int x; cin >> x;
  int happy=0;
  happy+=(x/500)*1000;
  x%=500;
  happy+=(x/5)*5;
  cout << happy << endl;
  return 0;
}