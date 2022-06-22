#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  ll x;
  string s;
  cin >> n >> x >> s;
  for(char i:s){
    if(i=='U') x/=2;
    else if(i=='L') x*=2;
    else x=x*2+1;
  }
  cout << x << endl;
  return 0;
}