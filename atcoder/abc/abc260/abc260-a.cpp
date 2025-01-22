#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  char a,b,c;
  cin >> a >> b >> c;
  if(a==b){
    if(a==c) cout << "-1\n";
    else cout << c << endl;
  }
  else if(b==c){
    if(a==b) cout << "-1\n";
    else cout << a << endl;
  }
  else if(a==c){
    if(a==b) cout << "-1\n";
    else cout << b << endl;
  }
  else cout << a << endl;
  return 0;
}