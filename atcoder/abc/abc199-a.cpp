#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if(a*a+b*b<c*c) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}