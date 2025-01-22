#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int a,b,n;
  cin >> a >> b >> n;
  int k=a*b/gcd(a,b);
  cout << (n+k-1)/k*k << endl;
  return 0;
}