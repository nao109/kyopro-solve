#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int k,a,b; cin >> k >> a >> b;
  int ch=a%k;
  if(a+k-ch<=b||ch==0) cout << "OK\n";
  else cout << "NG\n";
  return 0;
}