#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int y;
  cin >> y;
  if(y%4==0) y+=2;
  else if(y%4==1) y+=1;
  else if(y%4==3) y+=3;
  cout << y << endl;
  return 0;
}