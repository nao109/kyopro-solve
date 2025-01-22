#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int d; cin >> d;
  if(d==25) cout << "Christmas";
  if(d==24) cout << "Christmas Eve";
  if(d==23) cout << "Christmas Eve Eve";
  if(d==22) cout << "Christmas Eve Eve Eve";
  cout << "\n";
  return 0;
}