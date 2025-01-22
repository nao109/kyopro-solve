#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a=0;
  string s; cin >> s;
  rep(i,4){
    if(s[i]=='+') ++a;
    else --a;
  }
  cout << a << endl;
  return 0;
}