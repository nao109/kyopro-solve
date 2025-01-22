#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a[3]; rep(i,3) cin >> a[i];
  sort(a,a+3);
  cout << a[1] << endl;
  return 0;
}