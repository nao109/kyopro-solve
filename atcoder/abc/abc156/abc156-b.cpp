#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
int main(){
  cout << fixed << setprecision(7);
  int n,k; cin >> n >> k;
  long cnt=0;
  while(n>0){
    n = n/k;
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}