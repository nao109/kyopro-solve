#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string n; cin >> n;
  int ns=n.size();
  if(ns==1){
    cout << "Yes\n";
  }
  else if(ns==2){
    if(n[0]==n[1]) cout << "Yes\n";
    else cout << "No\n";
  }
  else{
    if(n[0]==n[2]) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}