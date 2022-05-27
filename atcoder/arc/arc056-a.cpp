#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define pi acos(-1)
int main(){
  int a,b,k,l;
  cin >> a >> b >> k >> l;
  int sum=min(((k+l-1)/l)*b,(k/l)*b+(k%l)*a);
  cout << sum << endl;
  return 0;
}