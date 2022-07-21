#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  cout << 2*n << endl;
  if(n%4!=0) cout << n%4;
  for(int i=0; i<n/4; ++i) cout << 4;
  cout << endl;
  return 0;
}