#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int x,y,k;
  cin >> x >> y >> k;
  if(k<=y) x+=k;
  else x-=k-2*y;
  cout << x << endl;
  return 0;
}