#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int x,y;
  cin >> x >> y;
  cout << (x%y==0 ? -1 : x) << endl;
  return 0;
}