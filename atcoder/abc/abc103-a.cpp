#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
const int mod = 1000000007;
int main(){
  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a,a+3);
  cout << a[2]-a[0] << endl;
  return 0;
}