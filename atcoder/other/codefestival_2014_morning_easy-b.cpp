#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  n=n%40;
  if(n<=20) cout << n << endl;
  else cout << 41-n << endl;
  return 0;
}