#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define fi first
#define se second
#define all(a) a.begin(),a.end()
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  a[0]=1,a[1]=1;
  for(int i=2; i<n; ++i) a[i]=(a[i-1]+a[i-2])%1000000007;
  cout << a[n-1] << endl;
  return 0;
}