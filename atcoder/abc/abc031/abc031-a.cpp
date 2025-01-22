#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,d; cin >> a >> d;
  cout << max((a+1)*d,a*(d+1)) << endl;
  return 0;
}