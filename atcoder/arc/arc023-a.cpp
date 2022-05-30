#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int y,m,d;
  cin >> y >> m >> d;
  if(m<=2){
    --y; m+=12;
  }
  ll day = 735369 - (365*y + (y/4) - (y/100) + (y/400) + 306*(m+1)/10 + d - 429);
  cout << day << endl;
  return 0;
}