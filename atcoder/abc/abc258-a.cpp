#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int k;
  cin >> k;
  if(k<60) cout << (k<10 ? "21:0" : "21:") << k << endl;
  else cout << (k<70 ? "22:0" : "22:") << k%60 << endl;
  return 0;
}