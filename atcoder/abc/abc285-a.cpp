#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int a,b;
  cin >> a >> b;
  if(a*2==b || a*2+1==b) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}