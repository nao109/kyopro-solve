#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int a,b,c;
  cin >> a >> b >> c;
  int d=c/(a*7+b)*7;
  c%=a*7+b;
  while(c>0){
    c-=a;
    ++d;
  }
  cout << d << endl;
  return 0;
}