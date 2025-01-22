#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  long double a,b,t;
  cin >> a >> b;
  long double k=pow((a/b)/4*(a/b), 1.0/3)-1;
  if(k<=0) t=a;
  else{
    long double fk=floor(k), ck=ceil(k);
    long double ft=fk*b+a/pow(fk+1,1.0/2);
    long double ct=ck*b+a/pow(ck+1,1.0/2);
    t=min(ft,ct);
  }
  cout << fixed << setprecision(10) << t << endl;
  return 0;
}