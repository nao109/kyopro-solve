#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  if(n>15) printf("%X\n",n);
  else if(n<10) cout << '0' << n << endl;
  else cout << '0' << (char)('A'+n-10) << endl;
  return 0;
}