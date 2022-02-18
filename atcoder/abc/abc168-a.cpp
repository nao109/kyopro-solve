#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  n=n%10;
  if(n==3) cout << "bon\n";
  else if(n==0||n==1||n==6||n==8) cout << "pon\n";
  else cout << "hon\n";  
  return 0;
}