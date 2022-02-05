#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  int a,b,c; cin >> a >> b >> c;
  if(max(a,max(b,c))==a){
    if(b>c) cout << "1\n2\n3\n";
    else cout << "1\n3\n2\n";
  }
  else if(max(a,max(b,c))==b){
    if(a>c) cout << "2\n1\n3\n";
    else cout << "3\n1\n2\n";
  }
  else {
    if(a>b) cout << "2\n3\n1\n";
    else cout << "3\n2\n1\n";
  }
  return 0;
}