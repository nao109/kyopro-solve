#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int a,b;
  cin >> a >> b;
  if(abs(a)<abs(b)) cout << "Ant\n";
  else if(abs(a)>abs(b)) cout << "Bug\n";
  else cout << "Draw\n";
  return 0;
}