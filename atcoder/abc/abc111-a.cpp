#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string n; cin >> n;
  rep(i,3){
    if(n[i]=='1') n[i]='9';
    else if(n[i]=='9') n[i]='1';
  }
  cout << n+"\n";
  return 0;
}