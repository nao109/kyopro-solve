#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
int main(){
  cout << fixed << setprecision(7);
  string s; cin >> s;
  int d;
  if(s=="SUN") d=7;
  if(s=="MON") d=6;
  if(s=="TUE") d=5;
  if(s=="WED") d=4;
  if(s=="THU") d=3;
  if(s=="FRI") d=2;
  if(s=="SAT") d=1;
  cout << d << endl;
  return 0;
}