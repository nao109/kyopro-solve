#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  double a,b;
  cin >> a >> b;
  double s=round(b*1000/a)/1000;
  cout << fixed << setprecision(3) << s << endl;
  return 0;
}