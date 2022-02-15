#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  char b; cin >> b;
  if(b=='A') cout << 'T';
  else if(b=='T') cout << 'A';
  else if(b=='G') cout << 'C';
  else if(b=='C') cout << 'G';
  cout << "\n";
  return 0;
}