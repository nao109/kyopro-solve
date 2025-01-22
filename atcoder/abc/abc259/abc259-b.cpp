#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  long double a,b,d;
  cin >> a >> b >> d;
  if(a==0 && b==0) cout << "0 0\n";
  else if(d==360) cout << a << " " << b << endl;
  else{
    d=d*acos(-1)/180;
    cout << fixed << setprecision(15);
    cout << a*cos(d)-b*sin(d) << a*sin(d)+b*cos(d) << endl;
  }
  return 0;
}