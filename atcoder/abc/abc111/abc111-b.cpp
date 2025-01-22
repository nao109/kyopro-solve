#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  int n; cin >> n;
  int i=1;
  while(n>111*i) ++i;
  cout << 111*i << endl;
  return 0;
}