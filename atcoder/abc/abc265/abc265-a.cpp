#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int x,y,n;
  cin >> x >> y >> n;
  cout << x*(n/3)+y*(n%3) << "\n";
  return 0;
}