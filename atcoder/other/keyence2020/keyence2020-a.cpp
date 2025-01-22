#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int h,w,n; cin >> h >> w >> n;
  cout << (n+max(h,w)-1)/max(h,w) << endl;
  return 0;
}