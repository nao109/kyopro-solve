#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int n; cin >> n;
  if(n==100) cout << "Perfect";
  else if(n>=90) cout << "Great";
  else if(n>=60) cout << "Good";
  else cout << "Bad";
  cout << endl;
  return 0;
}